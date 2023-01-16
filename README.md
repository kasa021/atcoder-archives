# atcoder-archive_template

<details open>

<summary>English</summary>

## What is this?

This is a template repository for AtCoder Archive.
It saves submissions of AtCoder to local directory.

Just press the button `Use this template` and create your own repository.

## Todo

- [ ] Change the reviewers and assignees to your GitHub ID (`.github/dependabot.yml`: Line 10, 12, 25, 27)
- [ ] Change the crawl time (`.github/workflows/crawl.yml`: Line 6)<br>Recommend: The time when you don't submit to AtCoder
- [ ] If you want to sign the commit
  - [ ] Add GPG **secret** key to your repository secrets. Please name the key `GPG_PRIVATE_KEY` and the passphrase `PASSPHRASE` (`.github/workflows/crawl.yml`: Line 33, 34)
  - [ ] Remove the lines 37-40 of `.github/workflows/crawl.yml` and the lines 34-37 of `.github/workflows/crawl_all.yml`
- [ ] If you don't want to sign the commit
  - [ ] Remove the lines 30-36 of `.github/workflows/crawl.yml` and the lines 27-33 of `.github/workflows/crawl_all.yml`
  - [ ] Change the Git Config to your name and email (`.github/workflows/crawl.yml`: Line 39, 40 and `.github/workflows/crawl_all.yml`: Line 36, 37)
  - [ ] Remove `-S` option (`_src/commit.py`: Line 12)
- [ ] Change the API Query to your AtCoder ID (`_src/fetch.py`: Line 10, 19)
- [ ] Enable GitHub Actions in your repository settings

## Disclaimer

This repository is not affiliated with AtCoder.
I am not responsible for any damage caused by this repository.

</details>

<details>

<summary>日本語</summary>

## これは何？

AtCoderの提出をローカルに保存するためのテンプレートリポジトリ。

`Use this template`ボタンを押して、自分のリポジトリを作成してください。

## やること

- [ ] レビュアーやアサイン先を自分のGitHub IDに変更する（`.github/dependabot.yml`: Line 10, 12, 25, 27）
- [ ] クロールの時間を変更する（`.github/workflows/crawl.yml`: Line 6）<br>おすすめ: 普段AtCoderに提出しない時間
- [ ] コミットに署名する場合
  - [ ] GPG **秘密鍵** をリポジトリの Secrets に追加する。秘密鍵は `GPG_PRIVATE_KEY`、パスフレーズは `PASSPHRASE` と名前をつけてください(`.github/workflows/crawl.yml`: Line 33, 34)
  - [ ] `.github/workflows/crawl.yml` 37-40行目と `.github/workflows/crawl_all.yml` 34-37行目を削除する
- [ ] コミットに署名しない場合
  - [ ] `.github/workflows/crawl.yml` 30-36行目と `.github/workflows/crawl_all.yml` 27-33行目を削除する
  - [ ] Gitに自分の名前とメールアドレスを設定する (`.github/workflows/crawl.yml`: Line 39, 40 and `.github/workflows/crawl_all.yml`: Line 36, 37)
  - [ ] `-S` オプションを削除 (`_src/commit.py`: Line 12)
- [ ] APIのクエリを自分のAtCoder IDに変更する（`_src/fetch.py`: Line 10, 19）
- [ ] リポジトリの設定でGitHub Actionsを有効にする

## 免責事項

このリポジトリにはAtCoder社は関わっていません。
このリポジトリによって生じた、いかなる損害についても、私は責任を負いません。

</details>

## License

MIT License, made by [a01sa01to](https://github.com/a01sa01to)

## Reference

- [AtCoder Problems API](https://github.com/kenkoooo/AtCoderProblems/blob/master/doc/api.md) (Using this API)
- [atcoder-dumper](https://github.com/yu7400ki/atcoder-dumper) (Created based on this)
