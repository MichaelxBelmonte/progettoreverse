// Function: FUN_01c46820
// Address: 01c46820
// Size: 725 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c46820(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  int iVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar1 = *arg1;
  if ((param_2 & 2) != 0) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar4 = false;
    }
    else {
      iVar5 = 0;
      do {
        FUN_01c82ad0();
        FUN_01c82ae0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
      bVar4 = true;
    }
    FUN_01c79df0();
    goto LAB_01c46ad4;
  }
  if (lVar1 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar1 + 0xc) != 0;
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01c4696a;
      local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      cVar2 = FUN_01c82ad0();
    } while (cVar2 != '\0');
    bVar6 = false;
LAB_01c4696a:
    FUN_01c79df0();
  }
  bVar4 = false;
  if (((param_2 & 4) == 0) && (bVar4 = false, !bVar6)) {
    FUN_01c46c40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_01c469c6;
      }
    }
    else if (local_58 != 0) {
LAB_01c469c6:
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar4 = false;
      }
      else {
        iVar5 = 0;
        bVar4 = false;
        do {
          cVar2 = FUN_01c82ad0();
          if (cVar2 != '\0') {
            bVar4 = true;
            FUN_01c82ae0();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_58 + 0xc));
      }
      FUN_01c79df0();
      FUN_00d50b20();
      goto LAB_01c46a54;
    }
    bVar4 = false;
  }
LAB_01c46a54:
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        cVar2 = FUN_01c82ad0();
        if (cVar2 == '\0') {
          bVar4 = true;
          FUN_01c82ae0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c79df0();
  }
LAB_01c46ad4:
  if (bVar4) {
    (**(code **)(*this_ptr + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
  }
  return;
}

