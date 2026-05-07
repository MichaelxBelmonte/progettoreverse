// Function: FUN_01d24ff0
// Address: 01d24ff0
// Size: 1502 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01d24ff0(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  uint32_t uVar6;
  uint uVar7;
  char *pcVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_01cae990();
  plVar3 = local_40;
  lVar2 = g_027ef970;
  if (g_027ef970 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    FUN_01cae990();
    plVar3 = local_40;
    lVar2 = g_027ef978;
    if (g_027ef978 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar3 + 0x50))();
    uVar9 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    if (cVar5 == '\0') {
      FUN_01cae990();
      lVar4 = g_02725a10;
      plVar3 = (int64_t *)CONCAT71(uStack_4f,local_50);
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar3 + 0x50))();
      uVar9 = (uint64_t)uVar7;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar9 == '\0') {
      FUN_01cae990();
      plVar3 = local_40;
      lVar2 = g_027ef980;
      if (g_027ef980 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_01cae990();
        plVar3 = local_40;
        lVar2 = g_027ef988;
        if (g_027ef988 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          uVar7 = FUN_01d827c0();
          uVar9 = (uint64_t)uVar7;
          goto LAB_01d25575;
        }
        if (*(char *)(this_ptr + 0x80) != '\0') {
          *(void*)(this_ptr + 0x80) = 0;
          FUN_01d2bdc0();
        }
        if (*(int64_t *)(this_ptr + 0x18) != 0) {
          FUN_00d50b00();
          if (*(char *)(this_ptr + 0x80) != '\0') {
            *(void*)(this_ptr + 0x80) = 0;
            FUN_01d2bdc0();
          }
          lVar2 = *(int64_t *)(this_ptr + 0x18);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar2 + 0xc);
          FUN_00d50b20();
          FUN_00d50b20();
          if (iVar1 != 0) {
            if (*(char *)(this_ptr + 0x80) != '\0') {
              *(void*)(this_ptr + 0x80) = 0;
              FUN_01d2bdc0();
            }
            lVar2 = *(int64_t *)(this_ptr + 0x18);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23310();
            plVar3 = local_40;
            pcVar8 = &local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_50 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d836c0();
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            uVar9 = CONCAT71((int7)((uint64_t)local_40 >> 8),plVar3 != local_40);
            if ((plVar3 == local_40) || (param_2 == '\0')) goto LAB_01d25575;
            FUN_01d25e40();
            goto LAB_01d25573;
          }
        }
      }
      else {
        if (*(char *)(this_ptr + 0x80) != '\0') {
          *(void*)(this_ptr + 0x80) = 0;
          FUN_01d2bdc0();
        }
        if (*(int64_t *)(this_ptr + 0x18) != 0) {
          FUN_00d50b00();
          if (*(char *)(this_ptr + 0x80) != '\0') {
            *(void*)(this_ptr + 0x80) = 0;
            FUN_01d2bdc0();
          }
          lVar2 = *(int64_t *)(this_ptr + 0x18);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar2 + 0xc);
          FUN_00d50b20();
          FUN_00d50b20();
          if (iVar1 != 0) {
            if (*(char *)(this_ptr + 0x80) != '\0') {
              *(void*)(this_ptr + 0x80) = 0;
              FUN_01d2bdc0();
            }
            lVar2 = *(int64_t *)(this_ptr + 0x18);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23340();
            plVar3 = local_40;
            pcVar8 = &local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_50 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d836c0();
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            uVar9 = CONCAT71((int7)((uint64_t)local_40 >> 8),plVar3 != local_40);
            if ((plVar3 == local_40) || (param_2 == '\0')) goto LAB_01d25575;
            FUN_01d25d00();
            goto LAB_01d25573;
          }
        }
      }
    }
    else if ((((*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) != 0) &&
              (*(char *)(this_ptr + 0x99) != '\0')) && (*(char *)(this_ptr + 0x9a) != '\0')) &&
            (cVar5 = FUN_01d25a00(), cVar5 != '\0')) {
      if (*(int64_t **)(this_ptr + 0x88) == (int64_t *)0x0) {
        uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      }
      else {
        uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x528))();
        uVar9 = (uint64_t)uVar7;
        if ((char)uVar7 == '\0') goto LAB_01d25575;
      }
      if (param_2 == '\0') goto LAB_01d25575;
      FUN_01d25b00();
      goto LAB_01d25573;
    }
  }
  else if (*(char *)(this_ptr + 0x99) != '\0') {
    if (*(int64_t **)(this_ptr + 0x88) == (int64_t *)0x0) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    }
    else {
      uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x528))();
      uVar9 = (uint64_t)uVar7;
      if ((char)uVar7 == '\0') goto LAB_01d25575;
    }
    if (param_2 == '\0') goto LAB_01d25575;
    FUN_01d25910();
LAB_01d25573:
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    goto LAB_01d25575;
  }
  uVar9 = 0;
LAB_01d25575:
  return uVar9 & 0xffffffff;
}

