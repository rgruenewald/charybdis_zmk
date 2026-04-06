# Charybdis ZMK Config (Anymak:END + Miryoku Layers)

This repository contains a customized ZMK setup for a **Charybdis 4x6** with trackball.

Current design goal:

- **Alphas:** Anymak:END-inspired base positions
- **Layer system:** Miryoku-style 3x5 core mapping (adapted onto 4x6 from bottom/inside)
- **Language profile:** German-first (DE keycodes, umlaut combos), English secondary

---

## Key Files

- `config/charybdis.keymap`
  - **Hardware source of truth**
  - Includes DE-specific and hardware-corrected mappings
- `config/charybdis.editor.keymap`
  - Editor-friendly mirror for visual tooling
  - May intentionally differ in some hardware-corrected thumb/locale details
- `config/keys_de_german.h`
  - DE keycode overrides and fixes for real hardware output

---

## Layer Overview

Layer IDs are fixed in `charybdis.keymap`:

- `BASE = 0`
- `NAV = 1`
- `SYM = 2`
- `NUM = 3`
- `MEDIA = 4`
- `MOUSE = 5`
- `SCROLL = 6`
- `FUN = 7`

### Important Behavior

- **Trackball pointer movement** is active on: `BASE NAV NUM MEDIA MOUSE`
- **Trackball scrolling** is active only on: `SCROLL`
- Scroll mode is toggled with `&tog SCROLL`

---

## Thumb Philosophy (Very Important)

There are known differences between what some editors show and what hardware emits (locale/layout transform effects).

### Rule of thumb

- Trust **`charybdis.keymap`** for actual keyboard behavior.
- Keep `charybdis.editor.keymap` easy to visualize.

### Base thumbs

Left thumbs are hardware-corrected in `charybdis.keymap` so tap behavior matches expected physical output.

Right thumbs keep the layer-switch logic with desired tap outputs (Delete/Backspace/Enter pattern as configured).

---

## German Typing Helpers

### Combos (in `charybdis.keymap`)

- `a + e -> ä`
- `o + e -> ö`
- `u + e -> ü`
- `n + s -> ß`

### Shifted dual-bindings on NUM layer

`n1s..n0s`, plus side symbols (`nlb`, `nrb`, `neq`, `nbs`, etc.) are implemented with `mod-morph` so:

- tap = base symbol/number
- with Shift = shifted counterpart

Examples:

- `8 -> *` with Shift
- `5 -> %` with Shift
- `] -> }` with Shift
- `= -> +` with Shift

---

## How to Customize Safely (Recommended Workflow)

1. **Edit** `config/charybdis.keymap` first (real behavior).
2. Mirror visual-only adjustments into `config/charybdis.editor.keymap` if needed.
3. Keep all layers at the same key count (keymap-drawer requires this).
4. Commit and push, then validate in Actions build.

---

## Common Pitfalls

- **Editor looks right, hardware is wrong**
  - Usually locale/transform mismatch. Fix in `charybdis.keymap` (not necessarily in editor file).
- **Cannot exit SCROLL layer**
  - Ensure `&tog SCROLL` exists at a reachable position in `SCROLL` layer.
- **keymap-drawer assertion: different key counts**
  - One layer has extra/missing bindings; align all layers.

---

## Build / CI

Builds run via GitHub Actions. You can manually trigger workflow runs with:

```bash
gh workflow run "ZMK Firmware" --ref mini_rgb_migration
```

Check latest run:

```bash
gh run list --workflow "ZMK Firmware" --branch mini_rgb_migration --limit 1
```

---

## Maintenance Notes

If behavior regresses after forced updates/rebases:

1. verify current branch head,
2. verify layer IDs (`BASE..FUN`) did not shift,
3. verify thumb hold-tap targets,
4. verify DE overrides in `keys_de_german.h`.

Document every hardware-specific correction in comments directly above affected bindings.
