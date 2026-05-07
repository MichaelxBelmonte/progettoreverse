// Function: FUN_00502e50
// Address: 00502e50
// Size: 556 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00502e50(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  uint64_t arg1;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00502eaa:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00502eaa;
    }
    plVar1 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) goto LAB_00502ed1;
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0050303c;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_0050303c:
      iVar5 = FUN_01caea40();
      if (iVar5 == 0) {
        FUN_01d66ab0();
      }
      else {
        FUN_01d66ab0();
      }
      FUN_00d50b20();
    }
  }
  else {
LAB_00502ed1:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00502f0c:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00502f0c;
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      if ((char)param_2 == '\0') {
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00502fe3;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_00502fe3:
          FUN_01caea40();
          FUN_01b18580();
          FUN_01d66ab0();
          FUN_00d50b20();
        }
      }
      else {
        uVar3 = FUN_01b18580();
        arg1 = (uint64_t)uVar3;
        uVar4 = FUN_01caea40();
        uVar6 = 0;
        if (uVar3 != uVar4) {
          uVar6 = uVar4;
        }
        FUN_00502230(param_1,uVar6);
      }
      uVar8 = CONCAT71((int7)(arg1 >> 8),1);
      FUN_00d50b20();
      goto LAB_0050306b;
    }
  }
  uVar8 = 0;
LAB_0050306b:
  return uVar8 & 0xffffffff;
}

