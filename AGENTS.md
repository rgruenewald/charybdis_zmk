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

## Profile

- **Role:** Full-Stack Developer
- **Operating System:** Manjaro Linux
- **Shells:** niri, noctalia-shell
- **Editor:** nvim (lazyvim)
- **Language Preference:** 70% German, 30% English

## Ziele für die Tastaturbelegung

- **Effizienz:** Reduzierung der Fingerbewegungen und Erhöhung der Tippgeschwindigkeit.
- **Komfort:** Ergonomische Verteilung der Tasten, um Belastungen zu minimieren.
- **Intuitivität:** Logische und leicht zu merkende Anordnung der Layer und Funktionen.
- **Flexibilität:** Anpassbarkeit an verschiedene Arbeitsabläufe und Sprachen (z. B. Deutsch und Englisch).

## Test- und Validierungsprozess

1. **Simulation:** Verwende den ZMK-Editor oder ähnliche Tools, um Änderungen visuell zu überprüfen.
2. **Hardware-Test:** Lade die Konfiguration auf die Tastatur und teste sie in realen Szenarien.
3. **Feedback-Schleife:** Sammle Feedback von Nutzern oder aus eigener Erfahrung und dokumentiere Verbesserungsmöglichkeiten.
4. **Benchmarking:** Vergleiche die neue Belegung mit der vorherigen anhand von Tippgeschwindigkeit, Fehlerquote und Komfort.

## Best Practices für Layer-Design

- **Primäre Funktionen auf der Grundebene:** Häufig genutzte Tasten wie Buchstaben, Enter, Backspace und Modifikatoren sollten auf der Grundebene (`BASE`) bleiben.
- **Logische Gruppierung:** Gruppiere verwandte Funktionen (z. B. Navigationstasten, Mediensteuerung) auf separaten Layern.
- **Einfache Erreichbarkeit:** Platziere häufig genutzte Layer-Toggles oder -Wechsel auf leicht erreichbaren Tasten.
- **Redundanz vermeiden:** Vermeide doppelte Funktionen, es sei denn, sie erhöhen die Ergonomie.

## Ressourcen und Tools

- **ZMK-Dokumentation:** [https://zmk.dev](https://zmk.dev)
- **Keymap-Editor:** Online-Tool zur Visualisierung und Bearbeitung von Keymaps.
- **Tippgeschwindigkeitstests:** Websites wie [10fastfingers](https://10fastfingers.com) zur Messung der Tippgeschwindigkeit.
- **Ergonomische Leitfäden:** Artikel und Studien zur ergonomischen Tastaturnutzung.

## Layout-Ansatz

- **Grundlayout (BASE):** Inspiriert von Anymak:END, optimiert für effizientes Tippen und ergonomische Fingerbewegungen.
- **Layer-Design:** Aufbauend auf Miryoku, um Navigation, Zahlenblock, Mediensteuerung und Mausbewegungen logisch und ergonomisch zu organisieren.
- **Hardware:** Charybdis MK2 4x6 mit integriertem Trackball für Maussteuerung und Scrollen.
- **Besonderheiten:** Kombination aus deutscher und englischer Sprache, angepasst an die Anforderungen eines Full-Stack-Entwicklers.

## Dokumentation von Änderungen

- **Changelog:** Führe eine Liste aller Änderungen an der Tastaturbelegung, einschließlich Datum und Zweck der Änderung.
- **Begründung:** Dokumentiere, warum eine Änderung vorgenommen wurde (z. B. Feedback, Ergonomie, neue Anforderungen).
- **Vergleich:** Beschreibe, wie sich die Änderung auf die Nutzung auswirkt (z. B. durch Benchmarks oder Tests).
