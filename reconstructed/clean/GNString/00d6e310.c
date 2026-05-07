// Function: FUN_00d6e310
// Address: 00d6e310
// Size: 1209 bytes
// Class: GNString
// String references:
//   "Cannot read preferences."
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d6e310(uint64_t param_1,void*param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*this_ptr;
  int64_t **pplVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  int64_t *local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  FUN_00c8e830();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar7 == (int64_t *)0x0) {
    cVar4 = FUN_00ce6e30();
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*(int64_t *)*param_2 + 0x398))(), cVar4 != '\0'))
    {
      FUN_00e828a0();
    }
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00c92170();
    (**(code **)(*(int64_t *)*param_2 + 0x380))();
    plVar3 = local_40;
    lVar2 = g_0277e5e0;
    if (g_0277e5e0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar8 = FUN_00d72350();
      plVar3 = local_40;
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = plVar7;
      local_68 = '\0';
      (**(code **)(*plVar3 + 0x5f8))(uVar8,&local_70);
      plVar7 = local_40;
      if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
          cVar4 = FUN_00e8db60();
          pplVar6 = &local_40;
          if (cVar4 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar7 = *pplVar6;
      if (plVar7 == (int64_t *)0x0) {
        bVar1 = false;
        plVar7 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
        }
        bVar1 = true;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00ca9940();
      plVar7 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar1) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = plVar7;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return;
}

