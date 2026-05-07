// Function: FUN_01c3bc90
// Address: 01c3bc90
// Size: 1471 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01c3c223) */
/* WARNING: Removing unreachable block (ram,0x01c3c22f) */
/* WARNING: Removing unreachable block (ram,0x01c3be42) */
/* WARNING: Removing unreachable block (ram,0x01c3be4e) */

void FUN_01c3bc90(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong **pplVar11;
  int iVar12;
  undefined8 *unaff_RDI;
  longlong local_98;
  longlong *local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_48 = puVar3;
  (*DAT_02572370)();
  if ((undefined *)*unaff_RDI != (undefined *)0x0) {
    local_90._0_1_ = '\0';
    local_98 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    local_88 = (undefined *)*unaff_RDI;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar12 = -local_80._4_4_;
        }
        else {
          iVar12 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar12);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar12 = 0;
        }
        local_80 = CONCAT44(iVar12,(int)local_80);
      }
      lVar4 = (longlong)(int)local_80;
      iVar12 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar12);
      if (*(int *)(local_88 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_88 + 0x10);
      local_98 = *(longlong *)(lVar10 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar8 = (pthread_key_t)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ebc80();
      plVar6 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar6 + 0xc) != 0) {
          local_68 = '\0';
          local_70 = (longlong *)0x0;
          local_60 = plVar6;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          while( true ) {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar12 = -local_58._4_4_;
              }
              else {
                iVar12 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar12);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar12 = 0;
              }
              local_58 = CONCAT44(iVar12,(int)local_58);
            }
            lVar4 = (longlong)(int)local_58;
            iVar12 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar12);
            if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
            lVar10 = local_60[2];
            local_70 = *(longlong **)(lVar10 + (lVar4 + 1) * 8);
            local_38 = '\0';
            local_40 = local_70;
            cVar2 = FUN_00d23d70();
            pVar8 = (pthread_key_t)lVar10;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              plVar6 = (longlong *)FUN_00e8fc40();
              FUN_007ef010();
              (**(code **)(*plVar6 + 0x18))();
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              plVar1 = (longlong *)plVar6[2];
              plVar7 = plVar1;
              if (plVar1 != local_40) {
                if (local_38 == '\0') {
                  if (local_40 == (longlong *)0x0) {
                    plVar7 = (longlong *)0x0;
                    goto LAB_01c3bfaf;
                  }
                  FUN_00d50b00();
                  plVar1 = (longlong *)plVar6[2];
                  plVar6[2] = (longlong)local_40;
                  plVar7 = local_40;
                }
                else {
                  local_38 = '\0';
                  plVar7 = local_40;
LAB_01c3bfaf:
                  plVar6[2] = (longlong)plVar7;
                }
                pVar8 = (pthread_key_t)plVar1;
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                  plVar7 = local_40;
                }
              }
              if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              plVar1 = (longlong *)plVar6[3];
              plVar7 = plVar1;
              if (plVar1 != local_40) {
                if (local_38 == '\0') {
                  if (local_40 == (longlong *)0x0) {
                    plVar7 = (longlong *)0x0;
                    goto LAB_01c3c058;
                  }
                  FUN_00d50b00();
                  plVar1 = (longlong *)plVar6[3];
                  plVar6[3] = (longlong)local_40;
                  plVar7 = local_40;
                }
                else {
                  local_38 = '\0';
                  plVar7 = local_40;
LAB_01c3c058:
                  plVar6[3] = (longlong)plVar7;
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                  plVar7 = local_40;
                }
              }
              if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_38 = '\0';
              local_40 = plVar6;
              FUN_00d21140();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_88;
    FUN_001159b0();
  }
  if (*(int *)((longlong)local_48 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)local_90);
    pplVar11 = &local_40;
    if ((char)local_90 != '\0') {
      pplVar11 = &local_90;
    }
    local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_90);
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


