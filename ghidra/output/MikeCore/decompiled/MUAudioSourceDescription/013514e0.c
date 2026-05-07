// Function: FUN_013514e0
// Address: 013514e0
// Size: 1647 bytes
// Class: MUAudioSourceDescription


undefined8 * FUN_013514e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  undefined7 uVar11;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_78 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*param_2 + 0xc) < 1) {
    plVar3 = (longlong *)0x0;
    local_38 = 0;
    local_60 = 0;
    lVar9 = 0;
    local_58 = 0;
    local_40 = 0;
  }
  else {
    lVar12 = 0;
    local_40 = 0;
    local_58 = 0;
    lVar9 = 0;
    local_60 = 0;
    lVar13 = 0;
    local_38 = 0;
    plVar3 = (longlong *)0x0;
    plVar10 = param_2;
    do {
      pVar7 = (pthread_key_t)lVar13;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013dd7c0();
      lVar13 = local_50;
      uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
      if (local_50 == local_40) {
        lVar13 = local_40;
        if (((char)local_58 != '\0') || (local_50 == 0)) {
          plVar10 = (longlong *)(local_58 & 0xffffffff);
          goto joined_r0x013516bd;
        }
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_013516d0;
        }
LAB_01351655:
        local_48 = '\0';
        local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_40 = lVar13;
      }
      else {
        if (local_48 != '\0') {
          if (((char)local_58 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_01351655;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        plVar10 = (longlong *)CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          local_40 = lVar13;
LAB_013516d0:
          plVar10 = (longlong *)CONCAT71(uVar11,1);
          lVar13 = local_40;
        }
joined_r0x013516bd:
        local_40 = lVar13;
        if ((local_48 == '\0') || (local_50 == 0)) {
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar13 = 0;
        do {
          plVar10 = plVar3;
          lVar6 = *(longlong *)(local_40 + 0x10);
          lVar1 = *(longlong *)(lVar6 + lVar13 * 8);
          lVar8 = local_40;
          plVar3 = plVar10;
          if (lVar9 == lVar1) {
            if (((char)local_60 == '\0') && (lVar9 != 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              plVar3 = (longlong *)0x0;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              lVar6 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (lVar9 == 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              lVar9 = lVar1;
            }
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar6 = local_50;
          uVar11 = (undefined7)((ulonglong)plVar3 >> 8);
          cVar2 = (char)plVar10;
          lVar1 = local_50;
          if (local_50 == local_38) {
            plVar3 = plVar10;
            lVar6 = local_38;
            if ((cVar2 == '\0') && (local_50 != 0)) {
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
              if (local_48 != '\0') goto joined_r0x013519fe;
              FUN_00d50b00();
LAB_0135189f:
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
            }
joined_r0x01351ab8:
            local_38 = lVar6;
            lVar1 = local_50;
            if (local_48 != '\0') {
LAB_013518a9:
              lVar1 = local_50;
              lVar6 = local_38;
              if (local_50 != 0) {
                FUN_00d50b20();
                lVar1 = local_50;
                lVar6 = local_38;
              }
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              if (cVar2 == '\0') goto joined_r0x01351ab8;
              if (local_38 != 0) {
                FUN_00d50b20();
                local_38 = lVar6;
                goto LAB_0135189f;
              }
              local_38 = lVar6;
              lVar1 = local_50;
              if (local_48 == '\0') goto joined_r0x013519fe;
              goto LAB_013518a9;
            }
            plVar3 = (longlong *)CONCAT71(uVar11,1);
            if ((cVar2 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
              lVar1 = local_50;
            }
          }
joined_r0x013519fe:
          local_50 = lVar6;
          local_38 = local_50;
          if (local_50 != 0) {
            pVar7 = (pthread_key_t)local_50;
            local_48 = '\0';
            cVar2 = FUN_00ca18c0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_50;
            if (cVar2 == '\0') {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_0125a280();
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_013de8d0();
              uVar5 = FUN_00d470c0(dVar14 - dVar15);
              lVar6 = local_50;
              local_68 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar5 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_68 = '\x01';
              local_70 = lVar6;
              local_88 = local_38;
              local_80 = '\0';
              FUN_0139d260(uVar5,&local_88);
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = local_50;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
                lVar1 = local_50;
              }
            }
          }
          local_50 = lVar1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(local_40 + 0xc));
      }
      lVar12 = lVar12 + 1;
      lVar13 = (longlong)*(int *)(*param_2 + 0xc);
    } while (lVar12 < lVar13);
  }
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)plVar3 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


