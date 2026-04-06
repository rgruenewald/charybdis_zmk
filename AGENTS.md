# AGENTS.md

Guidelines for autonomous or assisted agents working in this repository.

## Purpose

This repository contains a ZMK configuration for a **Charybdis 4x6** (trackball),
with an Anymak:END-inspired alpha layout and Miryoku-oriented layers.

## Primary Source of Truth

- **Edit first:** `config/charybdis.keymap`
- **Editor/visualization mirror:** `config/charybdis.editor.keymap`
- **German keycode fixes:** `config/keys_de_german.h`

If visual output and hardware behavior differ, `charybdis.keymap` takes precedence.

## Working Principles

1. Prefer small, focused changes over large refactors.
2. Keep existing layer IDs (`BASE..FUN`) and structure unchanged.
3. For keymap edits, preserve the same key count on every layer.
4. Add hardware-specific correction comments directly above affected bindings.

## Functional Notes

- Trackball pointer is active on: `BASE NAV NUM MEDIA MOUSE`
- Scrolling is active only on: `SCROLL`
- Scroll mode toggle: `&tog SCROLL`

## Recommended Workflow

1. Implement changes in `config/charybdis.keymap`.
2. Mirror visual changes in `config/charybdis.editor.keymap` if needed.
3. Optionally run local validation (e.g., keymap generation/build).
4. Document changes clearly.

## Do Not

- Do not make cosmetic-only rewrites without functional value.
- Do not silently change layer IDs or hold-tap targets.
- Do not assume editor rendering automatically matches hardware output.
