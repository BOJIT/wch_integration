# wch_integration

Samples for testing WCH Zephyr Integrations

## Project Setup

1. Clone Project to your computer

2. Ensure that you have west installed somehere (I usually put it in `<GIT_REPO>/.venv`, as VSCode will usually launch it automatically.)

- `python -m venv .venv`
- `source .venv/bin/activate`
- `pip install west`

3. Run West Init Locally against the West YAML file: `west init -l samples`

4. Install Zephyr dependencies with `west packages pip --install`
