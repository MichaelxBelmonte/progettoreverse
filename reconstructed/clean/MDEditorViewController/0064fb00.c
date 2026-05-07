// Function: FUN_0064fb00
// Address: 0064fb00
// Size: 865 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_0064fb00(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  char *pcVar6;
  void* pVar7;
  char *pcVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  int64_t *local_90;
  char local_88 [8];
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_90 + 0x450))();
  if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00521db0();
    (**(code **)(*local_90 + 0x628))();
    if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pcVar8 = local_40;
    if (local_88[0] != '\0') {
      pcVar8 = local_88;
    }
    local_40[0] = local_88[0];
    *pcVar8 = '\0';
    if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = local_90;
    lVar1 = *(int64_t *)(arg1 + 0xa0);
    if (lVar1 != 0) {
      local_88[0] = '\0';
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar9 = 0;
        do {
          FUN_006f3f00();
          plVar2 = local_68;
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_006f3f00();
            (**(code **)(*local_50 + 0x628))();
            plVar2 = local_68;
            local_38[0] = local_60[0];
            pcVar8 = local_38;
            pcVar6 = local_60;
            if (local_60[0] == '\0') {
              pcVar6 = pcVar8;
            }
            *pcVar6 = '\0';
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar7 = (void*)pcVar8;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a1110();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01313ad0();
            plVar3 = local_68;
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == local_58) {
              *(void*)(this_ptr + 1) = 0;
              if ((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              *this_ptr = plVar2;
              *(void*)(this_ptr + 1) = 1;
              FUN_000e3600();
              if (local_40[0] == '\0') {
                return this_ptr;
              }
              goto LAB_0064fe0e;
            }
            if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar9 = iVar9 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar9);
        } while (iVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_000e3600();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (local_40[0] != '\0') {
LAB_0064fe0e:
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}

