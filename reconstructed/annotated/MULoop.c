// ===== MULoop — Annotated small functions =====
// 1 readable functions
// Known properties: 1
//   MULoopUserRoleMask _roleMask

// ==================================================
// @01164770 (701 bytes) — calculation
// Known properties of MULoop:
// _roleMask

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  
  FUN_01150e50();
  *this = &DAT_02616c68;
  FUN_01164bb0();
  *(undefined4 *)(this + 9) = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a4190 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a4158 = FUN_01164320();
        _DAT_027a4150 = "_roleMask";
        _DAT_027a4160 = 0;
        _DAT_027a4168 = 0x6900;
        _DAT_027a4170 = "MULoopUserRoleMask";
        _DAT_027a4178 = 0;
        uRam00000000027a4180 = 0;
        _DAT_027a4188 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01164c90();
  FUN_01164d70();
  FUN_01164e50();
  FUN_01164f30();
  FUN_01165010();
  this[0xf] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011650f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operators";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  this[0x10] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011651e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operator";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this[0x11] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011652d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_operator";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerCommit");
  }
  this[0x12] = 0;
  lVar2 = FUN_01164320();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011653c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_users";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}



