// Function: FUN_00de7b20
// Address: 00de7b20
// Size: 1228 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00de7b20(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  void*local_50;
  int64_t *local_48;
  char local_40;
  
  if ((*arg1 == 0) || (*param_2 == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_68 = '\0';
    local_60 = *(int64_t *)(*arg1 + 0x10);
    local_58 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      local_50 = &g_026fdd40;
      do {
        local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (int64_t)local_58 * 8);
        FUN_00e6fcd0((int64_t)local_58,&local_70);
        if (local_78 == '\0') {
          if (local_80 == (int64_t *)0x0) {
            local_48 = (int64_t *)0x0;
            local_40 = 1;
          }
          else {
            FUN_00d50b00();
            local_48 = local_80;
            local_40 = 1;
          }
        }
        else {
          local_48 = local_80;
          local_40 = 1;
        }
        plVar1 = local_48;
        local_40 = '\x01';
        if ((g_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_026cd0e8 = FUN_00d4fe50();
          g_026cd0d0 = "GNDictionary";
          g_026cd0d8 = 0x28;
          g_026cd0e0 = FUN_00022d20;
          g_026cd0f0 = 0;
          ram_00000000026cd0f8 = 0;
          g_026cd100 = 0;
          g_026cd178 = 0;
          ram_00000000026cd180 = 0;
          g_026cd188 = 0;
          g_026cd18a = 6;
          g_026cd108 = 0;
          ram_00000000026cd110 = 0;
          g_026cd118 = 0;
          ram_00000000026cd120 = 0;
          g_026cd128 = 0;
          ram_00000000026cd130 = 0;
          g_026cd138 = 0;
          ram_00000000026cd140 = 0;
          g_026cd148 = 0;
          ram_00000000026cd150 = 0;
          g_026cd158 = 0;
          ram_00000000026cd160 = 0;
          g_026cd168 = 0;
          ram_00000000026cd170 = 0;
          g_026cd193 = 0;
          g_026cd18b = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar7 = (int64_t **)&g_02802688;
          if (cVar5 != '\0') {
            if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
              g_026d5e58 = FUN_00d4fe50();
              g_026d5e40 = "GNString";
              g_026d5e48 = 0x40;
              g_026d5e50 = FUN_0005d920;
              g_026d5e60 = 0;
              ram_00000000026d5e68 = 0;
              g_026d5e70 = 0;
              ram_00000000026d5e78 = 0;
              g_026d5e80 = 0;
              ram_00000000026d5e88 = 0;
              g_026d5e90 = 0;
              ram_00000000026d5e98 = 0;
              g_026d5ea0 = 0;
              ram_00000000026d5ea8 = 0;
              g_026d5eb0 = 0;
              ram_00000000026d5eb8 = 0;
              g_026d5ec0 = 0;
              ram_00000000026d5ec8 = 0;
              g_026d5ed0 = 0;
              ram_00000000026d5ed8 = 0;
              g_026d5ee0 = 0;
              ram_00000000026d5ee8 = 0;
              g_026d5ef0 = 0;
              ram_00000000026d5ef8 = 0;
              g_026d5f00 = 0;
              ___cxa_guard_release();
            }
            cVar5 = FUN_00e8db60();
            pplVar7 = &local_48;
            if (cVar5 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
          }
        }
        plVar4 = local_48;
        lVar3 = local_70;
        plVar1 = *pplVar7;
        cVar5 = *(char *)(pplVar7 + 1);
        if ((cVar5 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b00();
          *(void*)(this_ptr + 1) = 0;
LAB_00de7e96:
          *this_ptr = (int64_t)plVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
joined_r0x00de7eb6:
          if (local_68 == '\0') {
            return this_ptr;
          }
          if (local_70 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        if (plVar1 != (int64_t *)0x0) {
          *(void*)(this_ptr + 1) = 0;
          if (cVar5 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00de7e96;
        }
        if (local_48 == (int64_t *)*param_2) {
          if (param_1 != (int64_t *)0x0) {
            lVar2 = *param_1;
            if (lVar2 == local_70) {
              if (((char)param_1[1] == '\0') && (local_70 != 0)) {
                if (local_68 == '\0') {
                  FUN_00d50b00();
                  goto LAB_00de7f6d;
                }
                goto LAB_00de7f32;
              }
            }
            else if (local_68 == '\0') {
              local_50 = (void*)CONCAT71(local_50._1_7_,(char)param_1[1]);
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *param_1 = lVar3;
              if (((char)local_50 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_00de7f6d:
              *(void*)(param_1 + 1) = 1;
            }
            else {
              *param_1 = local_70;
              if (((char)param_1[1] != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_00de7f32:
              *(void*)(param_1 + 1) = 1;
              local_68 = '\0';
            }
          }
          *(void*)(this_ptr + 1) = 0;
          lVar3 = *arg1;
          if ((char)arg1[1] == '\0') {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            *this_ptr = lVar3;
            *(void*)(this_ptr + 1) = 1;
          }
          else {
            *this_ptr = lVar3;
            *(void*)(this_ptr + 1) = 1;
            *(void*)(arg1 + 1) = 0;
          }
          if ((local_40 != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto joined_r0x00de7eb6;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(int *)(local_60 + 0xc));
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return this_ptr;
}

