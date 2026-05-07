// Function: FUN_0070f740
// Address: 0070f740
// Size: 754 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"

uint64_t FUN_0070f740(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01beea30();
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0xc) < 1) {
LAB_0070f922:
        uVar8 = 0;
      }
      else {
        FUN_00d23310();
        lVar1 = local_48;
        pcVar6 = local_38;
        if (local_40[0] != '\0') {
          pcVar6 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pplVar7 = &local_58;
        FUN_01bc1260();
        plVar2 = local_58;
        // [STATIC_INIT: property registration]
        if (plVar2 == (int64_t *)0x0) {
LAB_0070f844:
          pplVar7 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') goto LAB_0070f844;
        }
        plVar2 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 == (int64_t *)0x0) goto LAB_0070f922;
        FUN_003ba530();
        lVar1 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0070f8e2;
          }
LAB_0070f949:
          uVar8 = 0;
        }
        else {
LAB_0070f8e2:
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_003b7710();
            FUN_003bcea0(0,0,1 < *(int *)(lVar3 + 0xc));
          }
          if (lVar1 == 0) goto LAB_0070f949;
          uVar8 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0070f95b;
    }
  }
  uVar8 = 0;
LAB_0070f95b:
  return uVar8 & 0xffffffff;
}

