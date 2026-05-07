// Function: FUN_01c0f300
// Address: 01c0f300
// Size: 625 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01c0f300(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t **pplVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_a0;
  char local_98;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  
  FUN_01c1afc0();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (int64_t *)0x0) goto LAB_01c0f528;
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (int64_t *)0x0) goto LAB_01c0f528;
  local_78 = '\0';
  local_80 = (int64_t *)0x0;
  local_70 = plVar3;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
    lVar7 = 0;
    do {
      plVar1 = *(int64_t **)(plVar3[2] + lVar7 * 8);
      local_80 = plVar1;
      FUN_01c28c50();
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar6 = &local_80;
        if (cVar5 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar2 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01c0f435;
        }
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
        if (plVar2 != (int64_t *)0x0) {
LAB_01c0f435:
          local_48 = plVar2;
          FUN_01c10db0();
          (**(code **)(*(int64_t *)*param_2 + 0x370))();
          lVar4 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          cVar5 = FUN_00d23d70();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar5 != '\0') {
            *(void*)(this_ptr + 1) = 0;
            if (local_78 == '\0') {
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *this_ptr = (int64_t)plVar1;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              *this_ptr = (int64_t)plVar1;
              *(void*)(this_ptr + 1) = 1;
              local_78 = '\0';
            }
            FUN_00d50b20();
            FUN_01c10620();
            FUN_00d50b20();
            return this_ptr;
          }
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
    } while ((int)lVar7 < *(int *)((int64_t)plVar3 + 0xc));
  }
  FUN_01c10620();
  FUN_00d50b20();
LAB_01c0f528:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

