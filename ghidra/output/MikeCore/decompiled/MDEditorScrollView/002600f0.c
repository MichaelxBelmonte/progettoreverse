// Function: FUN_002600f0
// Address: 002600f0
// Size: 3549 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x00260a4f) */
/* WARNING: Removing unreachable block (ram,0x00260a5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002600f0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  int iVar13;
  longlong *plVar14;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  double dVar17;
  longlong *local_98;
  longlong *local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_38 [8];
  
  plVar5 = local_80;
  if (*(int *)(unaff_RDI + 0x198) != 0) {
    return;
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
LAB_002601ea:
    local_88 = (longlong *)0x0;
LAB_002601f8:
    bVar2 = true;
    local_98 = (longlong *)0x0;
LAB_00260201:
    bVar7 = 1;
    if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
      bVar1 = true;
      plVar15 = (longlong *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      local_38[0] = local_78[0];
      pcVar9 = local_78;
      if (local_78[0] == '\0') {
        pcVar9 = local_38;
      }
      *pcVar9 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 == (longlong *)0x0) {
        plVar16 = *(longlong **)(unaff_RDI + 0x90);
        if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_00260284;
        plVar16 = (longlong *)0x0;
      }
      else {
        plVar16 = local_80;
        if (local_38[0] == '\0') {
LAB_00260284:
          FUN_00d50b00();
        }
        if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
          (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
          pcVar9 = local_78;
          if (local_78[0] == '\0') {
            pcVar9 = local_38;
          }
          local_38[0] = local_78[0];
          *pcVar9 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_80 == (longlong *)0x0) {
            plVar15 = *(longlong **)(unaff_RDI + 0x90);
            if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_0026039c;
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = local_80;
            if (local_38[0] == '\0') {
LAB_0026039c:
              FUN_00d50b00();
            }
          }
          bVar1 = false;
          bVar7 = 0;
          goto LAB_002603f5;
        }
      }
      bVar1 = false;
      plVar15 = (longlong *)0x0;
    }
LAB_002603f5:
    FUN_01e436c0();
    (**(code **)(*plVar16 + 0xb38))();
    local_48 = local_58;
    if (local_98 == local_58) {
      local_48 = local_88;
      local_88 = local_58;
LAB_0026047c:
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        local_88 = local_58;
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        goto LAB_0026047c;
      }
      local_88 = local_58;
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_50 = '\0';
    }
    if (!(bool)(bVar7 | plVar15 == (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1 && plVar16 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar2 = false;
    if (local_48 == (longlong *)0x0) goto LAB_002604d7;
LAB_002604c9:
    if (*(int *)((longlong)local_48 + 0xc) == 0) goto LAB_002604d7;
    bVar1 = false;
LAB_002605cc:
    if (*(int *)((longlong)local_48 + 0xc) == 0) {
      bVar4 = false;
      bVar3 = false;
      plVar15 = DAT_026f6de0;
      goto joined_r0x002605e6;
    }
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_38[0] = local_78[0];
    pcVar9 = local_78;
    if (local_78[0] == '\0') {
      pcVar9 = local_38;
    }
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (longlong *)0x0) {
      plVar15 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar15 != (longlong *)0x0) goto LAB_002601dd;
      goto LAB_002601ea;
    }
    plVar15 = local_80;
    if (local_38[0] == '\0') {
LAB_002601dd:
      FUN_00d50b00();
    }
    if (plVar15 == (longlong *)0x0) goto LAB_002601ea;
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    pcVar9 = local_78;
    if (local_78[0] == '\0') {
      pcVar9 = local_38;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (longlong *)0x0) {
      plVar15 = *(longlong **)(unaff_RDI + 0x90);
LAB_002602f6:
      FUN_00d50b00();
    }
    else {
      plVar15 = local_80;
      if (local_38[0] == '\0') goto LAB_002602f6;
    }
    (**(code **)(*plVar15 + 0xe20))();
    if (local_50 == '\0') {
      if (local_58 == (longlong *)0x0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = local_58;
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_88 = local_58;
      local_50 = '\0';
    }
    FUN_00d50b20();
    FUN_00d50b20();
    local_98 = local_88;
    bVar2 = true;
    if (local_88 == (longlong *)0x0) goto LAB_002601f8;
    if (*(int *)((longlong)local_88 + 0xc) == 0) {
      bVar2 = false;
      goto LAB_00260201;
    }
    local_48 = local_88;
    if (local_88 != (longlong *)0x0) goto LAB_002604c9;
LAB_002604d7:
    plVar15 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar15))();
    local_88 = (longlong *)CONCAT71((int7)((ulonglong)local_88 >> 8),local_78[0]);
    pcVar9 = local_38;
    if (local_78[0] != '\0') {
      pcVar9 = local_78;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (longlong *)0x0) {
      plVar16 = *(longlong **)(unaff_RDI + 0x90);
LAB_00260538:
      FUN_00d50b00();
    }
    else {
      plVar16 = local_80;
      if (local_38[0] == '\0') goto LAB_00260538;
    }
    (**(code **)(*plVar16 + 0x9e0))();
    plVar16 = local_58;
    if (local_58 == local_48) {
LAB_002605a1:
      if (local_50 != '\0') {
LAB_002605a7:
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_48 != (longlong *)0x0) {
          local_48 = plVar16;
          FUN_00d50b20();
          goto LAB_002605a1;
        }
        local_48 = plVar16;
        if (local_50 == '\0') goto LAB_002605b5;
        goto LAB_002605a7;
      }
      if (local_48 != (longlong *)0x0) {
        local_48 = local_58;
        FUN_00d50b20();
      }
      local_50 = '\0';
      local_48 = plVar16;
    }
LAB_002605b5:
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar1 = true;
    if (local_48 != (longlong *)0x0) goto LAB_002605cc;
    local_48 = (longlong *)0x0;
    bVar4 = true;
    bVar3 = true;
    plVar15 = DAT_026f6de0;
joined_r0x002605e6:
    DAT_026f6de0 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b00();
      bVar3 = bVar4;
    }
    dVar17 = (double)FUN_00e7d6f0();
    uVar8 = (ulonglong)(dVar17 * DAT_023907c0);
    dVar17 = dVar17 * DAT_023907c0 - _DAT_023907c8;
    local_88 = (longlong *)0xaaaaaaaaaaaaaaab;
    FUN_0071a120();
    if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = (byte)(((longlong)dVar17 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
    local_50 = '\0';
    local_58 = plVar15;
    FUN_000175c0();
    if (local_78[0] == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      local_78[0] = '\0';
      bVar7 = FUN_00c70bc0();
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_80 != (longlong *)0x0 & bVar7) == 0) {
      bVar7 = 1;
      if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
        plVar16 = (longlong *)0x0;
        bVar1 = true;
        plVar15 = (longlong *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
        local_38[0] = local_78[0];
        pcVar9 = local_78;
        if (local_78[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_80 == (longlong *)0x0) {
          plVar16 = *(longlong **)(unaff_RDI + 0x90);
          if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_002607c6;
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = local_80;
          if (local_38[0] == '\0') {
LAB_002607c6:
            FUN_00d50b00();
          }
          if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
            (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
            pcVar9 = local_78;
            if (local_78[0] == '\0') {
              pcVar9 = local_38;
            }
            local_38[0] = local_78[0];
            *pcVar9 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 == (longlong *)0x0) {
              plVar15 = *(longlong **)(unaff_RDI + 0x90);
              if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_00260841;
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = local_80;
              if (local_38[0] == '\0') {
LAB_00260841:
                FUN_00d50b00();
              }
            }
            bVar1 = false;
            bVar7 = 0;
            goto LAB_00260864;
          }
        }
        bVar1 = false;
        plVar15 = (longlong *)0x0;
      }
LAB_00260864:
      FUN_01e436c0();
      (**(code **)(*plVar16 + 0xb40))();
      plVar6 = local_58;
      plVar14 = local_48;
      if (local_58 == local_48) {
LAB_002608cd:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar14 = plVar6;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (!bVar3) {
            local_48 = plVar6;
            FUN_00d50b20();
          }
          goto LAB_002608cd;
        }
        if (!bVar3) {
          local_48 = local_58;
          FUN_00d50b20();
        }
        local_50 = '\0';
      }
      if (!(bool)(bVar7 | plVar15 == (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar1 && plVar16 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar14 == (longlong *)0x0) || (*(int *)((longlong)plVar14 + 0xc) == 0)) {
        plVar15 = *(longlong **)(unaff_RDI + 0x90);
        (**(code **)(&UNK_00001550 + *plVar15))();
        pcVar9 = local_38;
        if (local_78[0] != '\0') {
          pcVar9 = local_78;
        }
        local_38[0] = local_78[0];
        *pcVar9 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_80 == (longlong *)0x0) {
          plVar16 = *(longlong **)(unaff_RDI + 0x90);
LAB_0026097f:
          FUN_00d50b00();
        }
        else {
          plVar16 = local_80;
          if (local_38[0] == '\0') goto LAB_0026097f;
        }
        (**(code **)(*plVar16 + 0x9d0))();
        local_48 = local_58;
        local_88 = local_58;
        plVar16 = plVar14;
        if (local_58 == plVar14) {
LAB_002609ee:
          local_48 = plVar16;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar16 = local_48;
            if (plVar14 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar16 = local_48;
            }
            goto LAB_002609ee;
          }
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_50 = '\0';
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        bVar1 = true;
      }
      else {
        bVar1 = false;
        local_48 = plVar14;
      }
    }
  }
  FUN_012e74e0();
  if (local_78[0] == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78[0] = '\0';
  }
  if (((bVar2) && (local_80 != (longlong *)0x0)) &&
     ((1 < *(int *)((longlong)local_80 + 0xc) && (*(longlong *)(unaff_RDI + 0x1b0) != 0)))) {
    *(undefined8 *)(unaff_RDI + 0x1b0) = 0;
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar10 = *(longlong *)(unaff_RDI + 0x1b0), lVar10 != 0)) {
    if (local_80 != (longlong *)0x0) {
      local_78[0] = '\0';
      local_80 = (longlong *)0x0;
      local_70 = plVar5;
      local_68 = 0xffffffff;
      local_60 = 0;
      while( true ) {
        lVar10 = (longlong)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
        local_88 = (longlong *)local_70[2];
        local_80 = (longlong *)local_88[lVar10 + 1];
        pvVar11 = _pthread_getspecific((pthread_key_t)local_88);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f51f0();
        plVar16 = local_58;
        plVar15 = *(longlong **)(unaff_RDI + 0x1b0);
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == plVar15) {
          FUN_000be170();
          goto joined_r0x00260ca7;
        }
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
      }
      FUN_000be170();
      lVar10 = *(longlong *)(unaff_RDI + 0x1b0);
      local_88 = local_70;
    }
    if (lVar10 != 0) {
      *(undefined8 *)(unaff_RDI + 0x1b0) = 0;
      FUN_00d50b20();
    }
  }
joined_r0x00260ca7:
  if ((plVar5 == (longlong *)0x0) || (*(int *)((longlong)plVar5 + 0xc) != 1)) {
    lVar10 = *(longlong *)(unaff_RDI + 0x1b0);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_00228980();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) goto LAB_00260eb0;
  }
  else {
    if (bVar2) {
      FUN_00d23310();
      local_88 = (longlong *)CONCAT71((int7)((ulonglong)local_88 >> 8),local_78[0]);
      pcVar9 = local_38;
      if (local_78[0] != '\0') {
        pcVar9 = local_78;
      }
      local_38[0] = local_78[0];
      *pcVar9 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific((pthread_key_t)local_88);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      plVar5 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00260d27;
        }
        if (*(longlong *)(unaff_RDI + 0x1b0) != 0) {
          *(undefined8 *)(unaff_RDI + 0x1b0) = 0;
          goto LAB_00260d78;
        }
      }
      else {
        local_50 = '\0';
LAB_00260d27:
        plVar15 = *(longlong **)(unaff_RDI + 0x1b0);
        if (plVar15 != plVar5) {
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *(longlong **)(unaff_RDI + 0x1b0) = plVar5;
          if (plVar15 != (longlong *)0x0) {
LAB_00260d78:
            FUN_00d50b20();
          }
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pVar12 = (pthread_key_t)CONCAT71((int7)((ulonglong)local_88 >> 8),local_78[0]);
    pcVar9 = local_38;
    if (local_78[0] != '\0') {
      pcVar9 = local_78;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar11 = _pthread_getspecific(pVar12);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f51f0();
    plVar5 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00228980();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00260eb0:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


