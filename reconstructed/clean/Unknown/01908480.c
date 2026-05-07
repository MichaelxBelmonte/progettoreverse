// Function: FUN_01908480
// Address: 01908480
// Size: 3758 bytes
// Class: Unknown

void FUN_01908480(double param_1,double param_2,double param_3,double param_4)

{
  char cVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* in_ECX;
  char in_DL;
  char unaff_SIL;
  double dVar8;
  double dVar9;
  double in_XMM4_Qa;
  int iStack_5c;
  int iStack_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00e7bcc0();
  uVar2 = FUN_00e7cd00(param_1 + g_0241ad28);
  dVar8 = (double)FUN_00e7c860();
  dVar8 = (double)((uint64_t)(dVar8 - param_1) & g_023908f0);
  lVar3 = FUN_00e7cd00(param_3 + g_0241ad28);
  dVar9 = (double)FUN_00e7c860();
  dVar9 = (double)((uint64_t)(dVar9 - param_3) & g_023908f0);
  iStack_54 = (int)((uint64_t)lVar3 >> 0x20);
  iStack_5c = (int)(uVar2 >> 0x20);
  if (dVar8 <= g_0241ad28) {
    if (g_0241ad28 < dVar9) {
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
  else if (dVar9 <= g_0241ad28) {
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
        uVar7 = *(uint64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
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
      lVar6 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
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

