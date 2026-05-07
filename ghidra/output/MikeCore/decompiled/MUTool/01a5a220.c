// Function: FUN_01a5a220
// Address: 01a5a220
// Size: 2990 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a5a360) */
/* WARNING: Removing unreachable block (ram,0x01a5a817) */
/* WARNING: Removing unreachable block (ram,0x01a5a823) */
/* WARNING: Removing unreachable block (ram,0x01a5a4df) */
/* WARNING: Removing unreachable block (ram,0x01a5a4eb) */
/* WARNING: Removing unreachable block (ram,0x01a5ac4a) */
/* WARNING: Removing unreachable block (ram,0x01a5ac56) */
/* WARNING: Removing unreachable block (ram,0x01a5a36c) */
/* WARNING: Removing unreachable block (ram,0x01a5a543) */
/* WARNING: Removing unreachable block (ram,0x01a5a54f) */
/* WARNING: Removing unreachable block (ram,0x01a5ac85) */
/* WARNING: Removing unreachable block (ram,0x01a5ac91) */
/* WARNING: Removing unreachable block (ram,0x01a5acc1) */
/* WARNING: Removing unreachable block (ram,0x01a5accd) */

void FUN_01a5a220(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined7 uVar14;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  void *pvVar13;
  pthread_key_t pVar15;
  uint uVar16;
  int iVar17;
  longlong *unaff_RDI;
  ulonglong uVar18;
  longlong *plVar19;
  longlong local_a8;
  char local_a0;
  ulonglong local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_00d23340();
  local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
  pplVar9 = &local_80;
  if ((char)local_80 == '\0') {
    pplVar9 = &local_50;
  }
  *(undefined1 *)pplVar9 = 0;
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_88 == (longlong *)0x0) {
    return;
  }
  local_38 = local_88;
  if ((char)unaff_RDI[6] == '\0') {
    while (*(int *)(unaff_RDI[5] + 0xc) != 0) {
      FUN_00d23340();
      local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a5f2f0();
      if (((char)local_50 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_88 + 0x478))();
      if ((char)local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    local_58 = 0;
    plVar19 = local_78;
  }
  else {
    (**(code **)(*local_88 + 0xa60))();
    uVar8 = FUN_01a59d50();
    uVar14 = (undefined7)((ulonglong)uVar8 >> 8);
    if (local_88 == (longlong *)0x0) {
      bVar3 = 1;
      local_98 = CONCAT71(uVar14,1) & 0xffffffff;
      plVar12 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
      uVar8 = 0;
    }
    else {
      if ((char)local_80 == '\0') {
        uVar8 = FUN_00d50b00();
        uVar14 = (undefined7)((ulonglong)uVar8 >> 8);
      }
      local_40 = (longlong *)CONCAT71(uVar14,1);
      local_98 = 0;
      bVar3 = 0;
      uVar8 = CONCAT71(uVar14,1);
      plVar12 = local_88;
    }
    uVar16 = *(uint *)(unaff_RDI[5] + 0xc);
    uVar18 = (ulonglong)uVar16;
    if (0 < (int)uVar16) {
      while( true ) {
        local_60 = plVar12;
        uVar16 = uVar16 - 1;
        FUN_01a5ff20();
        local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_80._0_1_ = '\0';
        cVar6 = FUN_00d24090();
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar6 == '\0') ||
           (cVar6 = (**(code **)(*unaff_RDI + 0x440))(), plVar12 = local_60, cVar6 == '\0')) {
          FUN_01a5f2f0();
          plVar12 = local_60;
          (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[5] + 0x10) + (ulonglong)uVar16 * 8) +
                      0x478))();
          FUN_00d23620();
        }
        else {
          FUN_0198a800();
        }
        if (((char)local_50 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((longlong)uVar18 < 2) break;
        uVar18 = uVar18 - 1;
        plVar12 = local_60;
      }
    }
    (**(code **)(*local_38 + 0xa58))();
    uVar10 = FUN_01a59d50();
    plVar19 = local_78;
    pcVar4 = DAT_026342f8;
    if (local_88 == plVar12) {
      plVar5 = plVar12;
      if ((bool)(bVar3 & local_88 != (longlong *)0x0)) {
        local_58 = CONCAT71((uint7)(uint3)(local_98 >> 8),1);
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
          pcVar4 = DAT_026342f8;
          plVar19 = local_78;
        }
      }
      else {
        local_58 = uVar8;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
          pcVar4 = DAT_026342f8;
          plVar19 = local_78;
        }
      }
    }
    else if ((char)local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      pcVar4 = DAT_026342f8;
      plVar19 = local_78;
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = DAT_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = DAT_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    local_78 = plVar5;
    DAT_026342f8 = pcVar4;
    if (local_78 != (longlong *)0x0) {
      local_70._4_4_ = 0;
      local_80._0_1_ = '\0';
      local_88 = (longlong *)0x0;
      local_70 = 0xffffffff;
      local_68 = 0;
      bVar1 = false;
      plVar12 = (longlong *)0x0;
      bVar7 = false;
      local_60 = local_78;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar17 = -local_70._4_4_;
          }
          else {
            iVar17 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar17);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar17 = 0;
          }
          local_70 = CONCAT44(iVar17,(int)local_70);
        }
        plVar19 = local_60;
        lVar11 = (longlong)(int)local_70;
        iVar17 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar17);
        local_40 = plVar12;
        if (*(int *)((longlong)local_78 + 0xc) <= iVar17) break;
        local_88 = *(longlong **)(local_78[2] + 8 + lVar11 * 8);
        if (0 < *(int *)(unaff_RDI[5] + 0xc)) {
          lVar11 = 0;
          do {
            FUN_01a5ff20();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 == local_88) {
              if (*(longlong *)(*(longlong *)(unaff_RDI[5] + 0x10) + lVar11 * 8) != 0) {
                FUN_00d50b00();
                FUN_00d50b20();
                plVar12 = local_40;
                goto LAB_01a5a6f0;
              }
              break;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(unaff_RDI[5] + 0xc));
        }
        cVar6 = (**(code **)(*unaff_RDI + 0x440))();
        plVar19 = local_40;
        plVar12 = local_40;
        if (cVar6 != '\0') {
          plVar12 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined2 *)(plVar12 + 0x29) = 0;
          plVar12[0x28] = 0;
          *(undefined8 *)((longlong)plVar12 + 0x14c) = 0;
          *(undefined8 *)((longlong)plVar12 + 0x154) = 0;
          plVar12[0x2b] = 0;
          plVar12[0x2c] = 0;
          pVar15 = 0x26342d0;
          *plVar12 = (longlong)&DAT_026342e0;
          plVar12[2] = (longlong)&DAT_02634c68;
          plVar12[0x27] = (longlong)&DAT_02634ca8;
          plVar12[0x2d] = (longlong)&DAT_02634cd8;
          plVar12[0x2e] = 0;
          plVar12[0x2f] = 0;
          (*pcVar4)();
          if (plVar12 == plVar19) {
            plVar12 = plVar19;
            if (bVar1) {
              FUN_00d50b20();
              bVar2 = bVar1;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar13 = _pthread_getspecific(pVar15);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          plVar19 = local_50;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 == (longlong *)0x0) {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 != (longlong *)0x0) {
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              plVar19 = local_50;
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_0198a7b0();
              if (plVar19 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            plVar19 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_0198a7b0();
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*unaff_RDI + 0x438))();
          FUN_01a5f2f0();
          (**(code **)(*local_38 + 0x450))();
          FUN_0198a800();
          local_48 = '\0';
          local_50 = plVar12;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
          bVar1 = bVar2;
        }
LAB_01a5a6f0:
      }
      FUN_01a5d060();
      if (bVar7) {
        FUN_00d23340();
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 == '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*local_88 + 0xb48))();
        FUN_00d50b20();
      }
      goto LAB_01a5ad27;
    }
  }
  local_78 = plVar19;
  plVar12 = (longlong *)0x0;
  bVar1 = false;
  plVar19 = (longlong *)0x0;
LAB_01a5ad27:
  FUN_00d50b20();
  if ((bVar1) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


