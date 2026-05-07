// Function: FUN_013ea3f0
// Address: 013ea3f0
// Size: 1735 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013ea57b) */
/* WARNING: Removing unreachable block (ram,0x013ea92f) */
/* WARNING: Removing unreachable block (ram,0x013ea93b) */
/* WARNING: Removing unreachable block (ram,0x013ea491) */
/* WARNING: Removing unreachable block (ram,0x013ea49d) */
/* WARNING: Removing unreachable block (ram,0x013ea97c) */
/* WARNING: Removing unreachable block (ram,0x013ea988) */
/* WARNING: Removing unreachable block (ram,0x013eaa30) */
/* WARNING: Removing unreachable block (ram,0x013eaa3c) */

void FUN_013ea3f0(pthread_key_t param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar16;
  bool bVar17;
  char local_b0;
  undefined7 uStack_af;
  char local_a8;
  ulonglong local_a0;
  longlong *local_90;
  char local_88;
  undefined8 local_78;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  lVar1 = unaff_RDI[0x1d];
  local_a0 = param_2;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar6 = unaff_RDI[0x1e];
  local_38 = local_90;
  if (lVar6 != 0) {
    local_78 = 0xffffffff;
    while( true ) {
      iVar12 = (int)local_78 + 1;
      if (*(int *)(lVar6 + 0xc) <= iVar12) break;
      plVar10 = *(longlong **)(lVar6 + 0x10);
      plVar16 = (longlong *)plVar10[(longlong)(int)local_78 + 1];
      if (local_90 == (longlong *)0x0) {
        bVar17 = true;
      }
      else {
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = local_90;
        while( true ) {
          lVar5 = (longlong)(int)local_48;
          iVar14 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar14);
          iVar11 = *(int *)((longlong)local_50 + 0xc);
          plVar10 = local_50;
          if (iVar11 <= iVar14) break;
          plVar10 = (longlong *)local_50[2];
          local_60 = (longlong *)plVar10[lVar5 + 1];
          FUN_013e9070();
          plVar2 = (longlong *)CONCAT71(uStack_af,local_b0);
          if ((local_a8 != '\0') && (plVar2 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 == local_60) break;
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar11 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar11 = 0;
            }
            local_48 = CONCAT44(iVar11,(int)local_48);
          }
        }
        bVar17 = iVar11 <= iVar14;
        FUN_007fe1f0();
      }
      pVar8 = (pthread_key_t)plVar10;
      FUN_013e9070();
      pvVar4 = _pthread_getspecific(pVar8);
      plVar10 = local_60;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar10 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar3 = (**(code **)(*plVar10 + 0x398))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0' && !bVar17) {
        bVar17 = local_78 < 0;
        uVar13 = local_78._4_4_;
        local_90 = local_38;
      }
      else {
        local_58[0] = '\0';
        FUN_00d21140();
        local_90 = local_38;
        if ((local_58[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar13 = ~local_78._4_4_;
        bVar17 = -1 < local_78;
        local_60 = plVar16;
      }
      local_78 = CONCAT44(uVar13,iVar12);
      if (uVar13 != 0) {
        if (uVar13 == 0 || bVar17) {
          iVar11 = -uVar13;
          local_78._0_4_ = iVar12;
        }
        else {
          FUN_00d23690();
          iVar11 = 0;
          local_78._0_4_ = iVar12 - uVar13;
        }
        local_78 = CONCAT44(iVar11,(int)local_78);
      }
    }
    FUN_013eb3d0();
  }
  if (local_90 != (longlong *)0x0) {
    if (0 < *(int *)((longlong)local_90 + 0xc)) {
      uVar13 = 0;
      do {
        plVar16 = *(longlong **)(local_90[2] + (ulonglong)uVar13 * 8);
        uVar9 = uVar13;
        pvVar4 = _pthread_getspecific(uVar13);
        plVar10 = plVar16;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        cVar3 = (**(code **)(*plVar10 + 0x398))();
        if (cVar3 == '\0') {
          if ((longlong *)unaff_RDI[0x1e] != (longlong *)0x0) {
            local_58[0] = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_50 = (longlong *)unaff_RDI[0x1e];
            while( true ) {
              lVar6 = (longlong)(int)local_48;
              iVar12 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar12);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar12) break;
              local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
              FUN_013e9070();
              local_90 = (longlong *)CONCAT71(uStack_af,local_b0);
              if ((local_a8 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_90 == plVar16) {
                FUN_013eb3d0();
                goto LAB_013ea760;
              }
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar12 = -local_48._4_4_;
                }
                else {
                  local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar12 = 0;
                }
                local_48 = CONCAT44(iVar12,(int)local_48);
              }
            }
            plVar10 = local_50;
            FUN_013eb3d0();
            uVar9 = (uint)plVar10;
          }
          if (*unaff_RSI == 0) {
            local_a0 = local_a0 & 0xffffffff00000000;
LAB_013eaa60:
            bVar17 = true;
            (**(code **)(*unaff_RDI + 0x660))();
LAB_013eaa75:
          }
          else {
            FUN_00c9fe40();
            local_b0 = local_58[0];
            pcVar7 = local_58;
            if (local_58[0] == '\0') {
              pcVar7 = &local_b0;
            }
            *pcVar7 = '\0';
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_60 == (longlong *)0x0) {
              uVar15 = 0;
              plVar10 = (longlong *)0x0;
            }
            else {
              uVar15 = (undefined4)CONCAT71((int7)((ulonglong)local_90 >> 8),1);
              plVar10 = local_60;
              if (local_b0 == '\0') {
                FUN_00d50b00();
              }
            }
            local_a0 = CONCAT44(local_a0._4_4_,uVar15);
            if (plVar10 == (longlong *)0x0) goto LAB_013eaa60;
            FUN_00ca13a0();
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            cVar3 = (**(code **)(*unaff_RDI + 0x648))();
            local_60 = plVar10;
            if (cVar3 != '\0') {
              pvVar4 = _pthread_getspecific(uVar9);
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar16 + 0x378))();
              bVar17 = false;
              goto LAB_013eaa75;
            }
            bVar17 = false;
          }
          if (((char)local_a0 != '\0') && (!bVar17)) {
            FUN_00d50b20();
          }
        }
LAB_013ea760:
        uVar13 = uVar13 + 1;
        local_90 = local_38;
      } while ((int)uVar13 < *(int *)((longlong)local_38 + 0xc));
    }
    FUN_007fe1f0();
  }
  FUN_00d242c0();
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


