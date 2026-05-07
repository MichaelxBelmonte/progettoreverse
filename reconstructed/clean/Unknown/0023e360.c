// Function: FUN_0023e360
// Address: 0023e360
// Size: 915 bytes
// Class: Unknown

uint64_t FUN_0023e360(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t in_RAX;
  char *pcVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    local_44 = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
    plVar8 = (int64_t *)0x0;
joined_r0x0023e481:
    if (param_2 != '\0') {
      local_50 = plVar8;
      (**(code **)((int64_t)&dylib_command_00001288.dylib.current_version + *plVar8))();
      (**(code **)((int64_t)&dylib_command_00001288.dylib.name.offset + *plVar8))();
      lVar1 = g_026f6e28;
      if (g_026f6e28 != 0) {
        FUN_00d50b00();
      }
      FUN_0023de90();
      plVar8 = local_50;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01caeae0();
    plVar3 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      uVar7 = 1;
      cVar4 = (char)local_44;
    }
    else {
      FUN_01caeae0();
      plVar3 = local_40;
      (**(code **)((int64_t)&dylib_command_00001288.dylib.current_version + *plVar8))();
      FUN_01d66ab0();
      uVar2 = local_44;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)plVar3 >> 8),1);
      cVar4 = (char)uVar2;
    }
    if (cVar4 != '\0') goto LAB_0023e6e2;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar8 = local_40;
    pcVar5 = local_38;
    pcVar6 = &local_60;
    if (local_38[0] != '\0') {
      pcVar6 = pcVar5;
    }
    local_60 = local_38[0];
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
      if (plVar8 != (int64_t *)0x0) goto LAB_0023e463;
LAB_0023e474:
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
      plVar8 = (int64_t *)0x0;
      goto joined_r0x0023e481;
    }
    if (local_60 == '\0') {
LAB_0023e463:
      pcVar5 = (char *)FUN_00d50b00();
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_0023e474;
    (**(code **)(*plVar8 + 0xed0))();
    if (local_40 == (int64_t *)0x0) {
      cVar4 = '\0';
    }
    else {
      (**(code **)(*plVar8 + 0xed0))();
      cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_5f,local_60) + 0x3d0))();
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      (**(code **)(*plVar8 + 0xed0))();
      if (local_40 == (int64_t *)0x0) {
        cVar4 = '\0';
      }
      else {
        (**(code **)(*plVar8 + 0xed0))();
        cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_5f,local_60) + 0x3b8))();
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_44 = 0;
        goto joined_r0x0023e481;
      }
      FUN_01caeae0();
      plVar8 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_01caeae0();
        FUN_01d66ab0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01caeae0();
      plVar8 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_01caeae0();
        FUN_01d66ab0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    uVar7 = 0;
  }
  FUN_00d50b20();
LAB_0023e6e2:
  return uVar7 & 0xffffffff;
}

