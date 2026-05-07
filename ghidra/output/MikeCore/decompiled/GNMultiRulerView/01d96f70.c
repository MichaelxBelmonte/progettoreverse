// Function: FUN_01d96f70
// Address: 01d96f70
// Size: 1450 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d9747f) */
/* WARNING: Removing unreachable block (ram,0x01d97488) */
/* WARNING: Removing unreachable block (ram,0x01d972fd) */
/* WARNING: Removing unreachable block (ram,0x01d97169) */
/* WARNING: Removing unreachable block (ram,0x01d97019) */
/* WARNING: Removing unreachable block (ram,0x01d97025) */
/* WARNING: Removing unreachable block (ram,0x01d96fb0) */
/* WARNING: Removing unreachable block (ram,0x01d96fbc) */
/* WARNING: Removing unreachable block (ram,0x01d97139) */
/* WARNING: Removing unreachable block (ram,0x01d97153) */
/* WARNING: Removing unreachable block (ram,0x01d97158) */
/* WARNING: Removing unreachable block (ram,0x01d97160) */
/* WARNING: Removing unreachable block (ram,0x01d97224) */
/* WARNING: Removing unreachable block (ram,0x01d97245) */
/* WARNING: Removing unreachable block (ram,0x01d9724a) */
/* WARNING: Removing unreachable block (ram,0x01d97189) */
/* WARNING: Removing unreachable block (ram,0x01d971d0) */
/* WARNING: Removing unreachable block (ram,0x01d971e5) */
/* WARNING: Removing unreachable block (ram,0x01d971d4) */
/* WARNING: Removing unreachable block (ram,0x01d97193) */
/* WARNING: Removing unreachable block (ram,0x01d97197) */
/* WARNING: Removing unreachable block (ram,0x01d9719f) */
/* WARNING: Removing unreachable block (ram,0x01d971c7) */
/* WARNING: Removing unreachable block (ram,0x01d971f0) */
/* WARNING: Removing unreachable block (ram,0x01d971fb) */
/* WARNING: Removing unreachable block (ram,0x01d971ff) */
/* WARNING: Removing unreachable block (ram,0x01d97204) */
/* WARNING: Removing unreachable block (ram,0x01d9720c) */
/* WARNING: Removing unreachable block (ram,0x01d97251) */
/* WARNING: Removing unreachable block (ram,0x01d97211) */
/* WARNING: Removing unreachable block (ram,0x01d97170) */
/* WARNING: Removing unreachable block (ram,0x01d971b0) */
/* WARNING: Removing unreachable block (ram,0x01d971ba) */
/* WARNING: Removing unreachable block (ram,0x01d971bf) */
/* WARNING: Removing unreachable block (ram,0x01d971c3) */
/* WARNING: Removing unreachable block (ram,0x01d9721a) */
/* WARNING: Removing unreachable block (ram,0x01d97253) */
/* WARNING: Removing unreachable block (ram,0x01d97329) */
/* WARNING: Removing unreachable block (ram,0x01d97370) */
/* WARNING: Removing unreachable block (ram,0x01d97385) */
/* WARNING: Removing unreachable block (ram,0x01d97374) */
/* WARNING: Removing unreachable block (ram,0x01d97333) */
/* WARNING: Removing unreachable block (ram,0x01d97337) */
/* WARNING: Removing unreachable block (ram,0x01d9733f) */
/* WARNING: Removing unreachable block (ram,0x01d97367) */
/* WARNING: Removing unreachable block (ram,0x01d97390) */
/* WARNING: Removing unreachable block (ram,0x01d9739b) */
/* WARNING: Removing unreachable block (ram,0x01d9739f) */
/* WARNING: Removing unreachable block (ram,0x01d973a4) */
/* WARNING: Removing unreachable block (ram,0x01d973ac) */
/* WARNING: Removing unreachable block (ram,0x01d973f6) */
/* WARNING: Removing unreachable block (ram,0x01d973b1) */
/* WARNING: Removing unreachable block (ram,0x01d97310) */
/* WARNING: Removing unreachable block (ram,0x01d97350) */
/* WARNING: Removing unreachable block (ram,0x01d9735a) */
/* WARNING: Removing unreachable block (ram,0x01d9735f) */
/* WARNING: Removing unreachable block (ram,0x01d97363) */
/* WARNING: Removing unreachable block (ram,0x01d973ba) */
/* WARNING: Removing unreachable block (ram,0x01d973f8) */
/* WARNING: Removing unreachable block (ram,0x01d974fd) */
/* WARNING: Removing unreachable block (ram,0x01d97506) */
/* WARNING: Removing unreachable block (ram,0x01d974b3) */
/* WARNING: Removing unreachable block (ram,0x01d97511) */
/* WARNING: Removing unreachable block (ram,0x01d9751a) */

void FUN_01d96f70(void)

{
  char cVar1;
  char *pcVar2;
  longlong *unaff_RDI;
  bool bVar3;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e44a80();
  if (*(char *)((longlong)unaff_RDI + 0x19d) != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    FUN_01e436c0();
    (**(code **)(*local_50 + 0x518))();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_50 == (longlong *)0x0) {
    cVar1 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = FUN_01f2fa60();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e42030();
    FUN_01d8b220();
    local_40[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_40;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (((local_50 != (longlong *)0x0) && (FUN_01e42030(), local_48[0] != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    FUN_01d8b200();
    local_38[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == (longlong *)0x0) {
      bVar3 = false;
    }
    else if (local_50 == unaff_RDI) {
      bVar3 = true;
    }
    else {
      FUN_01cf3f40();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x7b8))();
      bVar3 = local_50 == (longlong *)0x0;
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      (**(code **)(*unaff_RDI + 0x640))();
      FUN_01e3f820();
      FUN_00d05530();
      (**(code **)(*local_50 + 0x508))();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


