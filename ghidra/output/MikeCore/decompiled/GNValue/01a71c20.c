// Function: FUN_01a71c20
// Address: 01a71c20
// Size: 922 bytes
// Class: GNValue


void FUN_01a71c20(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  ulonglong uVar9;
  byte unaff_SIL;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  char local_58;
  ulonglong local_50;
  int local_44;
  ulonglong local_40;
  char local_38;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x9d8))();
  local_40 = uVar5;
  local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
  if ((((uVar5 >> 0x20 == 0) || (local_60 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
     && (cVar3 = (**(code **)(*unaff_RDI + 0x9e8))(), cVar3 == '\0')) {
    local_58 = '\0';
    local_60 = 0;
    local_44 = 0;
LAB_01a71cd0:
    pVar8 = (pthread_key_t)param_1;
    FUN_01b6d0d0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
    param_1 = (**(code **)(*unaff_RDI + 0x9e0))();
    cVar3 = FUN_01252960(param_1,uVar7,&local_60,&local_80);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      if (((local_60 != 0) && (local_80 >> 0x20 != 0)) &&
         (param_1 = local_78, local_78 >> 0x20 != 0)) {
        FUN_01a6c2e0(local_78,local_80,1);
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_01a71cd0;
          FUN_00d50b00();
        }
        else if (local_40 == 0) goto LAB_01a71cd0;
        if (*(int *)(uVar5 + 0xc) != 0) {
          local_40 = local_60;
          local_38 = '\0';
          iVar4 = FUN_00d237a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          pVar8 = (pthread_key_t)param_1;
          if (iVar4 == -1) {
            iVar4 = *(int *)(uVar5 + 0xc) / 2;
          }
          iVar4 = iVar4 + (uint)(unaff_SIL ^ 1) * 2 + -1;
          if ((-1 < iVar4) && (iVar4 < *(int *)(uVar5 + 0xc))) {
            if (local_44 == 0) {
              (**(code **)(*unaff_RDI + 0xa48))();
            }
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            FUN_01b6d0d0();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar9 = local_50 & 0xffffffff;
            uVar1 = *(ulonglong *)(*(longlong *)(uVar5 + 0x10) + uVar9 * 8);
            if (uVar1 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_50 = uVar1;
            local_40 = uVar1;
            FUN_012502a0(local_78,local_80,0);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = *(longlong *)(*(longlong *)(uVar5 + 0x10) + uVar9 * 8);
            local_68 = 0;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_68 = '\x01';
            param_1 = local_78;
            local_70 = lVar2;
            (**(code **)(*unaff_RDI + 0xa80))(local_78,local_80);
            local_44 = local_44 + 1;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      goto LAB_01a71cd0;
    }
    if (0 < local_44) {
      (**(code **)(*unaff_RDI + 0xa50))();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


