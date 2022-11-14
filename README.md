# 🌳 Tree sitter implementation for rego language

This repository tries to cover the tree-sitter implementation for the [OPA Rego language](https://www.openpolicyagent.org/docs/latest/policy-language/)

Available scripts

```bash
yarn generate # initializes parsing for the grammar.js file
yarn build # compiles the tree-sitter grammar
```

Please, verify that your editor supports [EditorConfig plugin](https://editorconfig.org/), which is necessary to keep the development consistent.
This repository uses Github Actions, which help verify that the changes submitted can be unit-tested, built and deployed to a [Github Pages](https://fallenangel97.github.io/tree-sitter-rego/)

List of TODO items:
- Introduce more unit tests covering the internal functions
- Add the loading of WASM file for the Github Actions pipeline
- Add locals.scm

---
Powered by

<a href='https://decodeapps.pp.ua/'><img height="20" src="https://decodeapps.pp.ua/_next/static/media/logo-light.3763f5cc.svg" /></a>
