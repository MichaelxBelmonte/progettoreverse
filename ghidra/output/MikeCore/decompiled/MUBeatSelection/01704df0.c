// Function: FUN_01704df0
// Address: 01704df0
// Size: 2918 bytes
// Class: MUBeatSelection


/* WARNING: Removing unreachable block (ram,0x0170512e) */
/* WARNING: Removing unreachable block (ram,0x01705137) */
/* WARNING: Removing unreachable block (ram,0x01705470) */
/* WARNING: Removing unreachable block (ram,0x01705479) */

void FUN_01704df0(double param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  longlong in_RCX;
  longlong lVar10;
  longlong unaff_RDI;
  double dVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  int iStack_7c;
  char local_58;
  undefined8 local_40;
  char local_38;
  
  lVar10 = in_RCX;
  FUN_00e7bcc0();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 < 3) {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901eb0(param_1 - dVar11);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fc680(param_1);
      local_40 = FUN_00e7cd00();
      FUN_00e7bfe0();
      FUN_016ea680();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_00e7c6b0();
      bVar3 = bVar3 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 == 0) break;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_019079b0();
    uVar12 = FUN_00e7b820();
    FUN_016da710(uVar12,uVar7);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_016ebc80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      lVar2 = **(longlong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_016d7fb0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fc0b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_00e7c650();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') break;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7b970();
    FUN_016da710();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar9 = 0;
  FUN_0165c340(0,0,0);
  FUN_0123ff00();
  FUN_00e7c2a0();
  FUN_00e7c3c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00e7bcc0();
  iStack_7c = (int)((ulonglong)in_RCX >> 0x20);
  if (((iStack_7c == 0) || (uVar6 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
    FUN_016f4db0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  uVar8 = FUN_00e7bcc0();
  if ((uVar8 >> 0x20 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
    FUN_00e7c240();
  }
  local_40 = CONCAT44((int)(uVar6 >> 0x20),1);
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_018fc1e0(param_1,0);
  uVar12 = FUN_0123fbe0(extraout_XMM0_Qa,param_2);
  if (local_58 == '\0') {
    if (in_RCX != 0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0165b0c0(uVar12,uVar7);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar10 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar10 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x58) = local_40;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (in_RCX != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (in_RCX != 0)) {
    FUN_00d50b20();
  }
  return;
}


