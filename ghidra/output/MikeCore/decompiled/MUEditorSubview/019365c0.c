// Function: FUN_019365c0
// Address: 019365c0
// Size: 2753 bytes
// Class: MUEditorSubview


/* WARNING: Removing unreachable block (ram,0x019369ac) */
/* WARNING: Removing unreachable block (ram,0x01936f65) */
/* WARNING: Removing unreachable block (ram,0x01936f71) */
/* WARNING: Removing unreachable block (ram,0x0193684a) */
/* WARNING: Removing unreachable block (ram,0x01936856) */
/* WARNING: Removing unreachable block (ram,0x0193675e) */
/* WARNING: Removing unreachable block (ram,0x0193676a) */
/* WARNING: Removing unreachable block (ram,0x01936e62) */
/* WARNING: Removing unreachable block (ram,0x01936e6e) */
/* WARNING: Removing unreachable block (ram,0x01936fd3) */
/* WARNING: Removing unreachable block (ram,0x01936fe2) */
/* WARNING: Removing unreachable block (ram,0x019369b8) */

void FUN_019365c0(undefined8 param_1,double param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  void *pvVar9;
  undefined7 uVar11;
  undefined8 uVar10;
  pthread_key_t pVar12;
  longlong lVar13;
  double dVar14;
  longlong *unaff_RDI;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong local_d8;
  char local_d0;
  ulonglong local_90;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  double local_40;
  longlong *local_38;
  
  plVar3 = local_80;
  FUN_019af4c0();
  if (unaff_RDI[0xa7] == 0) {
    if (*(int *)(unaff_RDI[0xab] + 0xc) == 0) {
      return;
    }
    do {
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_019562f0();
      if (((char)local_58 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x478))();
      if ((char)local_58 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    } while (*(int *)(unaff_RDI[0xab] + 0xc) != 0);
    return;
  }
  local_38 = (longlong *)(**(code **)(*unaff_RDI + 0xa60))();
  local_40 = param_2;
  dVar16 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  dVar14 = local_40;
  (**(code **)(&UNK_000016d0 + *unaff_RDI))((double)local_38 - dVar16);
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = *(uint *)(unaff_RDI[0xab] + 0xc);
  local_90 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) {
    local_40 = 0.0;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_38 = (longlong *)0x0;
    local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
    while( true ) {
      plVar2 = local_80;
      uVar15 = uVar15 - 1;
      FUN_01956980();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        iVar5 = -1;
      }
      else {
        local_78[0] = '\0';
        iVar5 = FUN_00d23d20();
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(&DAT_00001770 + *unaff_RDI))();
      plVar6 = local_38;
      if (cVar4 == '\x01' && iVar5 != -1) {
        local_40 = (double)((ulonglong)local_48 & 0xffffffff);
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0xab] + 0x10) + (ulonglong)uVar15 * 8);
        if (local_38 == plVar1) {
          if (((char)local_48 == '\0') && (local_38 != (longlong *)0x0)) {
            local_40 = (double)CONCAT71((int7)((ulonglong)local_38 >> 8),1);
            local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
            FUN_00d50b00();
          }
          else {
            local_40 = (double)((ulonglong)local_48 & 0xffffffff);
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            plVar6 = (longlong *)FUN_00d50b00();
          }
          local_40 = (double)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
          plVar6 = plVar1;
          if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
            local_38 = plVar1;
            FUN_00d50b20();
          }
        }
        FUN_019562f0();
        (**(code **)(*plVar6 + 0x478))();
        local_78[0] = '\0';
        FUN_00d23f50();
        local_80 = plVar6;
        if ((local_78[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (iVar5 != -1) {
        FUN_00d23620();
      }
      if (((char)local_58 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((longlong)local_90 < 2) break;
      local_90 = local_90 - 1;
      local_48 = (double)CONCAT44(local_48._4_4_,SUB84(local_40,0));
      local_38 = plVar6;
    }
  }
  local_38 = plVar6;
  dVar16 = (double)(**(code **)(*unaff_RDI + 0xa58))();
  FUN_019363e0();
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  dVar17 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  if (plVar3 != (longlong *)0x0) {
    local_48 = dVar16 - local_48;
    local_78[0] = '\0';
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = plVar3;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          iVar5 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar5) break;
      lVar13 = local_70[2];
      plVar2 = *(longlong **)(lVar13 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar12 = (pthread_key_t)lVar13;
      plVar6 = plVar2;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x378))();
      plVar6 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        pvVar9 = _pthread_getspecific(pVar12);
        plVar6 = plVar2;
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar6 + 0x378))();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar6 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar18 = (double)FUN_014bb4b0();
          if (local_48 <= dVar18) {
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_014bb3e0();
            if (dVar18 <= (dVar16 - dVar17) + dVar14) {
              local_50 = '\0';
              local_58 = plVar2;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  plVar2 = plVar3;
  dVar14 = local_40;
  plVar6 = local_38;
  if (plVar3 != local_80) {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_80;
    dVar14 = local_40;
    plVar6 = local_38;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
      dVar14 = local_40;
      plVar6 = local_38;
    }
  }
  local_40 = dVar14;
  local_38 = plVar6;
  if (plVar2 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    local_78[0] = '\0';
    local_60 = 0;
    local_68 = 0;
    local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    local_70 = plVar2;
    if (*(int *)((longlong)plVar2 + 0xc) < 1) {
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
    }
    else {
      iVar5 = 0;
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
      do {
        dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
        cVar4 = (**(code **)(&DAT_00001770 + *unaff_RDI))();
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000016d8 + *unaff_RDI))();
          local_38 = local_58;
          cVar4 = SUB81(dVar14,0);
          uVar11 = (undefined7)((ulonglong)local_58 >> 8);
          if (local_58 == plVar6) {
            local_40 = dVar14;
            plVar3 = plVar6;
            if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
              local_40 = (double)CONCAT71(uVar11,1);
              if (local_50 != '\0') goto LAB_01936f36;
              local_40 = (double)CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
LAB_01936f22:
            local_38 = plVar3;
            plVar3 = local_38;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
          else {
            if (local_50 == '\0') {
              uVar10 = 0;
              if (local_58 != (longlong *)0x0) {
                uVar10 = FUN_00d50b00();
              }
              local_40 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              plVar3 = local_38;
              if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar3 = local_38;
              }
              goto LAB_01936f22;
            }
            local_40 = (double)CONCAT71(uVar11,1);
            plVar3 = local_38;
            if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
LAB_01936f36:
          local_38 = plVar3;
          (**(code **)(*unaff_RDI + 0x450))();
          local_58 = local_38;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = FUN_019562f0();
          local_48 = (double)CONCAT44(local_48._4_4_,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1)
                                     );
          plVar6 = local_38;
          dVar14 = local_40;
        }
        iVar5 = iVar5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      } while (iVar5 < *(int *)((longlong)plVar2 + 0xc));
    }
    local_40 = dVar14;
    local_38 = plVar6;
    FUN_0131c810();
    uVar15 = (uint)local_48;
  }
  for (iVar5 = *(int *)(unaff_RDI[0xab] + 0xc); plVar3 = local_38, 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_0198a800();
  }
  if ((uVar15 & 1) != 0) {
    (**(code **)(*unaff_RDI + 0xb48))();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40._0_1_ != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


