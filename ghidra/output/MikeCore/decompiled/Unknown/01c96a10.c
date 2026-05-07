// Function: FUN_01c96a10
// Address: 01c96a10
// Size: 2422 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c96a92) */
/* WARNING: Removing unreachable block (ram,0x01c97068) */
/* WARNING: Removing unreachable block (ram,0x01c97074) */
/* WARNING: Removing unreachable block (ram,0x01c96e79) */
/* WARNING: Removing unreachable block (ram,0x01c96e85) */
/* WARNING: Removing unreachable block (ram,0x01c96fef) */
/* WARNING: Removing unreachable block (ram,0x01c96ffb) */
/* WARNING: Removing unreachable block (ram,0x01c97181) */
/* WARNING: Removing unreachable block (ram,0x01c9718d) */

void FUN_01c96a10(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  int iVar8;
  char *pcVar9;
  longlong unaff_RDI;
  longlong local_108;
  char local_100;
  longlong local_e8;
  char local_e0;
  longlong local_b8;
  char local_b0;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
    if (*(int *)(lVar2 + 0xc) != 0) {
      local_58[0] = '\0';
      local_60 = 0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = lVar2;
      while( true ) {
        lVar2 = (longlong)(int)local_48;
        iVar8 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar8);
        if (*(int *)(local_50 + 0xc) <= iVar8) break;
        local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (local_b8 == 0) {
          FUN_001159b0();
          goto LAB_01c971a6;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar8 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar8 = 0;
          }
          local_48 = CONCAT44(iVar8,(int)local_48);
        }
      }
      lVar7 = local_50;
      FUN_001159b0();
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_00049200();
      (**(code **)(*plVar4 + 0x18))();
      FUN_00d11ab0();
      lVar2 = DAT_027ed420;
      plVar5 = (longlong *)*param_2;
      if (DAT_027ed420 != 0) {
        FUN_00d50b00();
      }
      cVar1 = (**(code **)(*plVar5 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027ed418;
      if (cVar1 == '\0') {
        plVar5 = (longlong *)*param_2;
        if (DAT_027ed418 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*plVar5 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027ed428;
        if (cVar1 == '\0') {
          plVar5 = (longlong *)*param_2;
          if (DAT_027ed428 != 0) {
            FUN_00d50b00();
          }
          cVar1 = (**(code **)(*plVar5 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (cVar1 != '\0') {
            FUN_00d23310();
            pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar7 >> 8),local_58[0]);
            pcVar9 = local_38;
            if (local_58[0] != '\0') {
              pcVar9 = local_58;
            }
            local_38[0] = local_58[0];
            *pcVar9 = '\0';
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01267000();
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012caf10();
            if (local_e0 == '\0') {
              if (local_e8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_e0 = '\0';
            }
            (**(code **)(*plVar4 + 0x5f0))();
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            lVar2 = DAT_027ed428;
            if (DAT_027ed428 != 0) {
              FUN_00d50b00();
            }
            FUN_01ca79b0();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (local_b8 != 0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (local_e8 != 0) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          plVar5 = (longlong *)FUN_00e8fc40();
          FUN_01ca3a10();
          (**(code **)(*plVar5 + 0x18))();
          FUN_01273930();
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58[0] = '\0';
          }
          FUN_01c923c0();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar4 + 0x5f0))();
          lVar2 = DAT_027ed418;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              lVar2 = DAT_027ed418;
            }
          }
          else {
            local_58[0] = '\0';
          }
          DAT_027ed418 = lVar2;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01ca79b0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_01ca3a10();
        (**(code **)(*plVar5 + 0x18))();
        FUN_01273930();
        if (local_58[0] == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        FUN_01c92050();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
        FUN_00d50b00();
        FUN_00d11aa0();
        if ((longlong *)(unaff_RDI + 0x18) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
          FUN_00d50b20();
        }
        (**(code **)(*plVar4 + 0x5f0))();
        lVar2 = DAT_027ed420;
        if (local_58[0] == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            lVar2 = DAT_027ed420;
          }
        }
        else {
          local_58[0] = '\0';
        }
        DAT_027ed420 = lVar2;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca79b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
LAB_01c971a6:
    FUN_00d50b20();
  }
  return;
}


