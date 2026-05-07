// Function: FUN_00ca9940
// Address: 00ca9940
// Size: 1106 bytes
// Class: GNString
// String references:
//   "dict"
//   "plist"
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00ca9940(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *local_d0;
  char local_c8;
  char local_80;
  void*local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_50 = *arg1;
  if ((local_50 == 0) || (*(int *)(local_50 + 0x18) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_48 = '\0';
    cVar3 = FUN_00de3490();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      lVar5 = FUN_00e83010();
      if (lVar5 == 0) {
        bVar2 = false;
        lVar5 = 0;
      }
      else {
        FUN_00f2e9b0();
        _memcpy(param_1,(void *)(int64_t)*(int *)(*arg1 + 0x18),param_3);
        *(void*)(lVar5 + *(int *)(*arg1 + 0x18)) = 0;
        pvVar6 = (void *)0x0;
        FUN_00f308c0(0,0);
        if ((((local_80 == '\0') && (lVar5 = FUN_00f2de90(), lVar5 != 0)) &&
            (lVar5 = FUN_00f2de50(), lVar5 != 0)) && (iVar4 = FUN_00e7ddf0(), iVar4 == 0)) {
          FUN_00cabf30();
          lVar5 = local_60;
          if (local_60 == 0) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            if (local_58 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else {
          bVar2 = false;
          lVar5 = 0;
        }
        local_d0 = (int64_t *)&g_02593bb0;
        if ((local_78 != PTRg_0249c250) && (local_78 != (void*)0x0)) {
          operator_delete__(pvVar6);
        }
        FUN_00f2dc60();
      }
      FUN_00e83070();
      *(void*)(this_ptr + 1) = 0;
      if ((!bVar2) && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00de3e90();
      plVar1 = local_d0;
      if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
        cVar3 = FUN_00e85ea0();
        if (cVar3 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
          cVar3 = FUN_00e8db60();
          pplVar7 = &local_d0;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
      }
      *(void*)(this_ptr + 1) = 0;
      plVar1 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = (int64_t)plVar1;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = (int64_t)plVar1;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(pplVar7 + 1) = 0;
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

