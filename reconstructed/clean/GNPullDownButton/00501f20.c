// Function: FUN_00501f20
// Address: 00501f20
// Size: 505 bytes
// Class: GNPullDownButton

uint64_t FUN_00501f20(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00501f7a:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501f7a;
    }
    plVar1 = *pplVar5;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) goto LAB_00501fa1;
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_005020f4;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_005020f4:
      FUN_01d66ab0();
      FUN_00d50b20();
    }
  }
  else {
LAB_00501fa1:
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00501fdc:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501fdc;
    }
    plVar2 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      if ((char)param_2 == '\0') {
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_005020a6;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_005020a6:
          FUN_01b18580();
          FUN_01d66ab0();
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = FUN_01b18580();
        FUN_00502230(param_1,iVar4 != 1);
      }
      uVar6 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_00502108;
    }
  }
  uVar6 = 0;
LAB_00502108:
  return uVar6 & 0xffffffff;
}

