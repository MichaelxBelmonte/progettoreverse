// Function: FUN_01d11980
// Address: 01d11980
// Size: 518 bytes
// Class: GNValue

int64_t * FUN_01d11980(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t lVar7;
  float fVar8;
  uint32_t extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar9 [16];
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) goto LAB_01d11b78;
  FUN_01e40eb0();
  (**(code **)(*local_60 + 0x4a0))();
  plVar6 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01d11a1a;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_01d11a1a:
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((int64_t)plVar6 + 0xc)) {
    lVar7 = 0;
    do {
      plVar1 = *(int64_t **)(plVar6[2] + lVar7 * 8);
      if (plVar1 != arg1) {
        local_40 = '\0';
        local_48 = plVar1;
        FUN_00085720();
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar5 + 1) = 0;
          if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar2 != (int64_t *)0x0) {
          fVar8 = (float)(**(code **)(*plVar2 + 0x4d8))();
          if (fVar8 < *(float *)((int64_t)arg1 + 0x10c)) {
            (**(code **)(*arg1 + 0x4d8))();
            auVar3._4_4_ = extraout_XMM0_Db;
            auVar3._0_4_ = fVar8;
            auVar3._8_4_ = extraout_XMM0_Dc;
            auVar3._12_4_ = extraout_XMM0_Dd;
            auVar9._4_12_ = auVar3._4_12_;
            auVar9._0_4_ = fVar8 + g_024112b0;
            blendps(auVar9,auVar3,0xe);
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              *this_ptr = (int64_t)plVar2;
              *(void*)(this_ptr + 1) = 1;
              if ((char)local_34 != '\0') {
                return this_ptr;
              }
              FUN_00d50b20();
              return this_ptr;
            }
          }
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)plVar6 + 0xc));
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
LAB_01d11b78:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

