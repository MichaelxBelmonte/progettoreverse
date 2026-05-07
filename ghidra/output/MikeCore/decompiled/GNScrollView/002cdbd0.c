// Function: FUN_002cdbd0
// Address: 002cdbd0
// Size: 1108 bytes
// Class: GNScrollView
// String references:
//   "\r\n%@"
//   "%@"


/* WARNING: Removing unreachable block (ram,0x002ce005) */
/* WARNING: Removing unreachable block (ram,0x002ce011) */
/* WARNING: Removing unreachable block (ram,0x002cdf30) */
/* WARNING: Removing unreachable block (ram,0x002cdf04) */

ulonglong FUN_002cdbd0(undefined8 param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  pthread_key_t pVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar8;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  ulonglong local_58;
  char local_50;
  pthread_key_t local_40;
  
  uVar2 = local_58;
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    uVar8 = 0;
    goto LAB_002ce03a;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_58 + 0xc);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),0 < iVar1);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 < 1)) goto LAB_002ce03a;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_002cd3f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002cdc93;
    }
  }
  else if (local_58 != 0) {
LAB_002cdc93:
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    while( true ) {
      pVar3 = local_40 + 1;
      if (*(int *)(uVar2 + 0xc) <= (int)pVar3) break;
      uVar8 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + 8 + (longlong)(int)local_40 * 8);
      local_58 = uVar8;
      if (pVar3 == 0) {
        if (*(longlong *)(uVar8 + 0x18) == 0) {
          plVar7 = *(longlong **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(longlong **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(longlong *)(uVar8 + 0x18) == 0) {
          plVar7 = *(longlong **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(longlong **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  lVar6 = DAT_026fceb8;
  if (DAT_026fceb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca93d0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002ce03a:
  return uVar8 & 0xffffffff;
}


