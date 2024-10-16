# Google Search Operators Cheat Sheet

## I. Basic Search Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `"` | Exact match for a phrase. | `"nikola tesla"` |
| `OR` | Logical OR operator (case-sensitive). | `tesla OR edison` |
| `\|` | Equivalent to OR, useful if Caps Lock is broken. | `tesla \| edison` |
| `()` | Group operators to control execution order. | `(tesla OR edison) alternating current` |
| `-` | Exclude a term from results. | `tesla -motors` |
| `*` | Wild-card matching any word. | `tesla "rock * roll"` |
| `#..#` | Match a range of numbers. | `tesla announcement 2015..2017` |
| `$` | Search prices with the dollar sign. | `tesla deposit $1000` |
| `€` | Search prices with the Euro sign. | `€9,99 lunch deals` |
| `in` | Convert between two units. | `250 kph in mph` |

## II. Advanced Search Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `intitle:` | Search only in the page's title. | `intitle:"tesla vs edison"` |
| `allintitle:` | Search for all terms in the page title. | `allintitle: tesla vs edison` |
| `inurl:` | Search for a word or phrase in the URL. | `tesla announcements inurl:2016` |
| `allinurl:` | Search for all terms in the URL. | `allinurl: amazon field-keywords nikon` |
| `intext:` | Search for a word or phrase in the body text. | `intext:"orbi vs eero vs google wifi"` |
| `allintext:` | Search for all terms in the body text. | `allintext: orbi eero google wifi` |
| `filetype:` | Match only a specific file type. | `"tesla announcements" filetype:pdf` |
| `related:` | Return sites related to a target domain. | `related:nytimes.com` |
| `AROUND(X)` | Find results with terms within (X) words of each other. | `tesla AROUND(3) edison` |

## III. Unreliable/Deprecated Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `~` | Include synonyms (currently unreliable). | `~cars` |
| `+` | Force exact-match on a single phrase (deprecated). | `+cars` |
| `daterange:` | Return results in a specified Julian date range (inconsistent). | `tesla announcements daterange:2457663-2457754` |
| `link:` | Find pages that link to a target domain (deprecated). | `link:nytimes.com` |
| `inanchor:` | Find pages linked with the specified anchor text (narrow results). | `inanchor:"tesla announcements"` |
| `allinanchor:` | Find pages with all terms in the inbound anchor text. | `allinanchor: tesla announcements` |

---

**Note:** The reliability of the "Unreliable" operators can vary, and their use is generally discouraged for precise searches.
