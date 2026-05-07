// Function: FUN_01c0f780
// Address: 01c0f780
// Size: 1009 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c0f780(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t unaff_R13;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  if ((((int64_t *)*arg1 != (int64_t *)0x0) &&
      (cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3d8))(), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3e0))(), cVar2 == '\0')) {
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x4c0))();
    if (cVar2 == '\0') {
      plVar5 = (int64_t *)*arg1;
    }
    else {
      if (*(char *)(this_ptr + 0x2c) == '\0') goto LAB_01c0f7bf;
      (**(code **)(*(int64_t *)*arg1 + 0x4c8))();
      plVar1 = local_80;
      plVar5 = (int64_t *)*arg1;
      if (plVar5 == local_80) {
        if (((char)arg1[1] != '\0') || (local_80 == (int64_t *)0x0)) goto LAB_01c0f88e;
        local_38 = arg1 + 1;
        if (local_78 == '\0') {
          FUN_00d50b00();
          goto LAB_01c0f887;
        }
LAB_01c0f852:
        *(void*)local_38 = 1;
      }
      else {
        local_38 = arg1 + 1;
        cVar2 = (char)arg1[1];
        unaff_R13 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),cVar2);
        if (local_78 != '\0') {
          *arg1 = (int64_t)local_80;
          if ((cVar2 != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c0f852;
        }
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar1;
        if ((cVar2 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c0f887:
        *(void*)local_38 = 1;
LAB_01c0f88e:
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar5 = (int64_t *)*arg1;
      if (plVar5 == (int64_t *)0x0) goto LAB_01c0f7bf;
    }
    cVar2 = (**(code **)(*plVar5 + 0x3a0))();
    uVar7 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    if (cVar2 != '\0') goto LAB_01c0f7c2;
    cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
    if (cVar2 != '\0') {
      FUN_01c0e5e0();
      local_38 = (int64_t *)local_58;
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = plVar5;
      local_78 = '\0';
      cVar2 = FUN_00d23d70();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') goto LAB_01c0f7c2;
      local_70 = *param_2;
      if (local_70 != 0) {
        local_78 = 0;
        local_80 = (int64_t *)0x0;
        local_60 = 0;
        local_68 = 0;
        if (0 < *(int *)(local_70 + 0xc)) {
          lVar6 = 0;
          local_38 = (int64_t *)local_70;
          do {
            plVar5 = *(int64_t **)(*(int64_t *)((int64_t)local_38 + 0x10) + lVar6 * 8);
            local_80 = plVar5;
            FUN_01c28c50();
            pplVar4 = (int64_t **)&g_02802688;
            if (plVar5 != (int64_t *)0x0) {
              (**(code **)(*plVar5 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar4 = &local_80;
              if (cVar2 == '\0') {
                pplVar4 = (int64_t **)&g_02802688;
              }
            }
            if (*(char *)(pplVar4 + 1) == '\0') {
              if (*pplVar4 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01c0fa3d;
              }
            }
            else {
              *(void*)(pplVar4 + 1) = 0;
              if (*pplVar4 != (int64_t *)0x0) {
LAB_01c0fa3d:
                FUN_01c10db0();
                (**(code **)(*(int64_t *)*arg1 + 0x370))();
                if (local_88 == '\0') {
                  if (local_90 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_88 = '\0';
                }
                local_58 = local_90;
                local_50 = '\0';
                cVar2 = FUN_00d23d70();
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if (local_90 != 0) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  iVar3 = FUN_00b84c70();
                  uVar7 = CONCAT71((int7)(uVar7 >> 8),iVar3 != 1 || (int)local_58 == 0);
                }
                FUN_00d50b20();
                if (cVar2 != '\0') {
                  FUN_01c10620();
                  goto LAB_01c0f7c2;
                }
              }
            }
            lVar6 = lVar6 + 1;
            local_68 = CONCAT44(local_68._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)((int64_t)local_38 + 0xc));
        }
        FUN_01c10620();
      }
    }
  }
LAB_01c0f7bf:
  uVar7 = 0;
LAB_01c0f7c2:
  return uVar7 & 0xffffff01;
}

