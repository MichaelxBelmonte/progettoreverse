// Function: FUN_01908480
// Address: 01908480
// Size: 3758 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0190908c) */
/* WARNING: Removing unreachable block (ram,0x01909095) */
/* WARNING: Removing unreachable block (ram,0x01908f28) */
/* WARNING: Removing unreachable block (ram,0x01908f31) */
/* WARNING: Removing unreachable block (ram,0x01908c93) */
/* WARNING: Removing unreachable block (ram,0x01908c9c) */
/* WARNING: Removing unreachable block (ram,0x01908dd3) */
/* WARNING: Removing unreachable block (ram,0x01908ddc) */
/* WARNING: Removing unreachable block (ram,0x01908a1a) */
/* WARNING: Removing unreachable block (ram,0x01908a23) */
/* WARNING: Removing unreachable block (ram,0x01909121) */
/* WARNING: Removing unreachable block (ram,0x0190912a) */
/* WARNING: Removing unreachable block (ram,0x01909274) */
/* WARNING: Removing unreachable block (ram,0x0190927d) */
/* WARNING: Removing unreachable block (ram,0x01908a65) */
/* WARNING: Removing unreachable block (ram,0x01908a6e) */
/* WARNING: Removing unreachable block (ram,0x01908e2b) */
/* WARNING: Removing unreachable block (ram,0x01908e34) */
/* WARNING: Removing unreachable block (ram,0x01908d88) */
/* WARNING: Removing unreachable block (ram,0x01908d91) */
/* WARNING: Removing unreachable block (ram,0x01908bfd) */
/* WARNING: Removing unreachable block (ram,0x01908c06) */
/* WARNING: Removing unreachable block (ram,0x019092bf) */
/* WARNING: Removing unreachable block (ram,0x019092c8) */
/* WARNING: Removing unreachable block (ram,0x01908e76) */
/* WARNING: Removing unreachable block (ram,0x01908e7f) */
/* WARNING: Removing unreachable block (ram,0x01908edd) */
/* WARNING: Removing unreachable block (ram,0x01908ee6) */
/* WARNING: Removing unreachable block (ram,0x0190930a) */
/* WARNING: Removing unreachable block (ram,0x01909313) */
/* WARNING: Removing unreachable block (ram,0x019091b7) */
/* WARNING: Removing unreachable block (ram,0x019091c0) */
/* WARNING: Removing unreachable block (ram,0x01908b7d) */
/* WARNING: Removing unreachable block (ram,0x01908b86) */
/* WARNING: Removing unreachable block (ram,0x01908f8f) */
/* WARNING: Removing unreachable block (ram,0x01908f98) */
/* WARNING: Removing unreachable block (ram,0x019090d0) */
/* WARNING: Removing unreachable block (ram,0x019090d9) */
/* WARNING: Removing unreachable block (ram,0x01908bb2) */
/* WARNING: Removing unreachable block (ram,0x01908bbb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01908480(double param_1,double param_2,double param_3,double param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  pthread_key_t in_ECX;
  char in_DL;
  char unaff_SIL;
  double dVar8;
  double dVar9;
  double in_XMM4_Qa;
  int iStack_5c;
  int iStack_54;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00e7bcc0();
  uVar2 = FUN_00e7cd00(param_1 + DAT_0241ad28);
  dVar8 = (double)FUN_00e7c860();
  dVar8 = (double)((ulonglong)(dVar8 - param_1) & _DAT_023908f0);
  lVar3 = FUN_00e7cd00(param_3 + DAT_0241ad28);
  dVar9 = (double)FUN_00e7c860();
  dVar9 = (double)((ulonglong)(dVar9 - param_3) & _DAT_023908f0);
  iStack_54 = (int)((ulonglong)lVar3 >> 0x20);
  iStack_5c = (int)(uVar2 >> 0x20);
  if (dVar8 <= DAT_0241ad28) {
    if (DAT_0241ad28 < dVar9) {
      if ((((unaff_SIL != '\0') && (iStack_5c != 0)) && (iStack_54 != 0)) &&
         (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
        FUN_00e7b970();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(param_2 - dVar8 * in_XMM4_Qa);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01907b60(param_2);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if (in_DL == '\0') {
        if (((iStack_5c == 0) || (iStack_54 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
          dVar8 = (double)FUN_00e7c860();
          FUN_01907b60(param_4 - (param_3 - dVar8) * in_XMM4_Qa);
          if ((local_48 == '\0') && (local_50 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00e7b820();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(dVar8 * in_XMM4_Qa + param_2);
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else if (unaff_SIL == '\0') {
      if (in_DL == '\0') {
        if (((iStack_5c == 0) || (iStack_54 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
          FUN_01907b60(param_2);
          if ((local_48 == '\0') && (local_50 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01907b60(param_2);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_00e7b820();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(dVar8 * in_XMM4_Qa + param_2);
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00e7b970();
      dVar8 = (double)FUN_00e7c860();
      FUN_01907b60(param_4 - dVar8 * in_XMM4_Qa);
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (dVar9 <= DAT_0241ad28) {
    if (unaff_SIL == '\0') {
      if (in_DL == '\0') {
        FUN_00e7b820();
        if (((uVar2 >> 0x20 != 0) && (iStack_54 != 0)) && (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
          FUN_00e7b820();
          dVar8 = (double)FUN_00e7c860();
          FUN_01907b60(param_2 - (param_1 - dVar8) * in_XMM4_Qa);
          if ((local_48 == '\0') && (uVar2 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (uVar2 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else if (((iStack_5c == 0) || (iStack_54 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
        FUN_00e7b820();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(param_4 - (param_3 - dVar8) * in_XMM4_Qa);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_01907b60(param_4);
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01907b60(param_4);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_00e7b820();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(dVar8 * in_XMM4_Qa + param_4);
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00e7b970();
      dVar8 = (double)FUN_00e7c860();
      FUN_01907b60(param_4 - dVar8 * in_XMM4_Qa);
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_SIL == '\0') {
    if (in_DL == '\0') {
      if (((iStack_5c != 0) && (iStack_54 != 0)) && (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
        FUN_00e7b820();
        dVar8 = (double)FUN_00e7c860();
        FUN_01907b60(param_2 - (param_1 - dVar8) * in_XMM4_Qa);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if (((uVar2 >> 0x20 != 0) && (iStack_54 != 0)) && (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
          dVar8 = (double)FUN_00e7c860();
          FUN_01907b60(param_4 - (param_3 - dVar8) * in_XMM4_Qa);
          if ((local_48 == '\0') && (local_50 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      FUN_00e7b820();
      dVar8 = (double)FUN_00e7c860();
      FUN_01907b60(param_2 - (param_1 - dVar8) * in_XMM4_Qa);
      if ((local_38 == '\0') && (uVar2 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7b820();
      pvVar4 = _pthread_getspecific(in_ECX);
      uVar7 = uVar2;
      if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        uVar7 = *(ulonglong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      dVar8 = *(double *)(uVar7 + 0x40);
      dVar9 = (double)FUN_00e7c860();
      FUN_01907b60(dVar8 + dVar9 * in_XMM4_Qa);
      if ((local_48 == '\0') && (uVar2 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (uVar2 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  else {
    dVar8 = (double)FUN_00e7c860();
    FUN_01907b60(param_4 - (param_3 - dVar8) * in_XMM4_Qa);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7b970();
    pvVar4 = _pthread_getspecific(in_ECX);
    lVar6 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      lVar6 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    dVar8 = *(double *)(lVar6 + 0x40);
    dVar9 = (double)FUN_00e7c860();
    FUN_01907b60(dVar8 - dVar9 * in_XMM4_Qa);
    if ((local_48 == '\0') && (lVar3 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


