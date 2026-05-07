// Function: FUN_0192a150
// Address: 0192a150
// Size: 888 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x0192a1f7) */
/* WARNING: Removing unreachable block (ram,0x0192a200) */

void FUN_0192a150(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_40;
  char local_38;
  
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 8) {
    FUN_00c9eb90(DAT_02394254);
  }
  else {
    FUN_00c9eb90(DAT_02391090);
  }
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    plVar9 = local_40;
  }
  if (unaff_RDI[0x1b] == *unaff_RSI) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x960))();
  lVar8 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  cVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (0 < *(int *)((longlong)plVar9 + 0xc))) {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(plVar9[2] + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      if (unaff_RDI[0x1b] == *unaff_RSI) {
        pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b60();
        FUN_00aea610();
        uVar10 = FUN_00d46dc0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a0 = '\0';
        local_a8 = lVar8;
        FUN_019b43b0(uVar10,&local_a8);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar9 + 0xc));
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


