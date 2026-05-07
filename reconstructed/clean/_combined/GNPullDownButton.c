// ===================================================================
// GNPullDownButton — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 007f6970
// ============================================================
// Function: FUN_007f6970
// Address: 007f6970
// Size: 1790 bytes
// Class: GNPullDownButton

void FUN_007f6970(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int64_t *in_RDX;
  int64_t this_ptr;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  bool bVar15;
  uint32_t uVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t local_a8;
  char local_a0;
  int64_t *local_68;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  FUN_01e53c20();
  plVar6 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = (int64_t *)0x0;
  iVar10 = FUN_01d3a5a0();
  if (iVar10 == 1) {
    local_38 = (int64_t *)0x0;
    iVar10 = FUN_01d3b630();
    bVar15 = iVar10 == 1;
    plVar1 = *(int64_t **)(this_ptr + 0x70);
  }
  else {
    bVar15 = false;
    plVar1 = *(int64_t **)(this_ptr + 0x70);
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_007f6a7c:
    bVar4 = false;
    local_38 = (int64_t *)0x0;
  }
  else {
    local_38 = (int64_t *)0x0;
    iVar10 = (**(code **)(*plVar1 + 0x920))();
    if (iVar10 == 0) {
      bVar4 = false;
      local_38 = (int64_t *)0x0;
      lVar5 = *(int64_t *)(this_ptr + 0x70);
    }
    else {
      plVar1 = *(int64_t **)(this_ptr + 0x70);
      if (plVar1 == (int64_t *)0x0) goto LAB_007f6a7c;
      local_38 = (int64_t *)0x0;
      FUN_00d50b00();
      bVar4 = true;
      lVar5 = *(int64_t *)(this_ptr + 0x70);
      local_38 = plVar1;
    }
    if (lVar5 != 0) {
      iVar11 = (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x920))();
      if (iVar11 != 0) {
        plVar1 = *(int64_t **)(this_ptr + 0x78);
        if (plVar1 == local_38) {
          if ((iVar10 == 0) && (plVar1 != (int64_t *)0x0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (iVar10 == 0 || local_38 == (int64_t *)0x0) {
            bVar4 = true;
            local_38 = plVar1;
          }
          else {
            local_38 = plVar1;
            FUN_00d50b20();
            bVar4 = true;
          }
        }
      }
    }
  }
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_01e3f820();
    uVar18 = FUN_01e46ed0();
    FUN_01e3f820();
    uVar19 = FUN_01e46ed0();
    param_2 = (float)((uint64_t)uVar18 >> 0x20) - (float)((uint64_t)uVar19 >> 0x20);
    FUN_01e5bd60((float)uVar18 - (float)uVar19,param_2);
  }
  FUN_01e5d9c0();
  FUN_01e5d070();
  local_68 = (int64_t *)0x0;
  bVar2 = false;
  plVar12 = (int64_t *)0x0;
  bVar3 = false;
  while( true ) {
    FUN_01e42030();
    plVar13 = local_48;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) break;
    FUN_01d3abf0();
    uVar16 = FUN_01e466c0();
    fVar17 = (float)FUN_01e3f820();
    cVar8 = FUN_00d05410(uVar16,fVar17,param_2);
    if (cVar8 == '\0') {
      param_2 = fVar17;
      if (plVar12 != (int64_t *)0x0) {
        if (bVar3) {
          FUN_00d50b20();
        }
        bVar3 = false;
        param_2 = fVar17;
      }
      plVar12 = (int64_t *)0x0;
      if (local_68 != (int64_t *)0x0) goto LAB_007f6dd4;
    }
    else {
      (**(code **)(*plVar6 + 0x490))(uVar16);
      plVar13 = local_48;
      FUN_000f5df0();
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar14 = &local_48;
        if (cVar9 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar13 = *pplVar14;
      if (plVar12 == plVar13) {
        param_2 = fVar17;
        if ((!bVar3) && (plVar12 != (int64_t *)0x0)) {
          plVar13 = plVar12;
          if (*(char *)(pplVar14 + 1) != '\0') goto LAB_007f6d2e;
          FUN_00d50b00();
          goto joined_r0x007f6db4;
        }
      }
      else {
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_007f6d2e:
          *(void*)(pplVar14 + 1) = 0;
        }
joined_r0x007f6db4:
        bVar3 = true;
        plVar12 = plVar13;
        param_2 = fVar17;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != local_68) {
LAB_007f6dd4:
        if (local_68 != (int64_t *)0x0) {
          (**(code **)(*local_68 + 0x918))();
        }
        if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = plVar12;
        bVar2 = bVar3;
        if (plVar12 == (int64_t *)0x0) {
          if (local_38 != (int64_t *)0x0) goto LAB_007f6e4f;
          local_68 = (int64_t *)0x0;
        }
        else {
          (**(code **)(*plVar12 + 0x918))();
          if (local_38 != (int64_t *)0x0) {
LAB_007f6e4f:
            plVar13 = local_38;
            (**(code **)(*local_38 + 0x918))();
            if (plVar13 != plVar12) {
              bVar15 = true;
            }
          }
        }
      }
    }
    (**(code **)(*plVar6 + 0x658))();
    plVar7 = local_48;
    plVar13 = (int64_t *)*in_RDX;
    if (plVar13 == local_48) {
      if (((char)in_RDX[1] != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_007f6f23;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_007f6f1b;
      }
LAB_007f6ed1:
      *(void*)(in_RDX + 1) = 1;
    }
    else {
      lVar5 = in_RDX[1];
      if (local_40 != '\0') {
        *in_RDX = (int64_t)local_48;
        if (((char)lVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007f6ed1;
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *in_RDX = (int64_t)plVar7;
      if (((char)lVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_007f6f1b:
      *(void*)(in_RDX + 1) = 1;
LAB_007f6f23:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((*in_RDX == 0) ||
        (((bVar15 && (iVar10 = FUN_01d3a5a0(), iVar10 == 6)) && (cVar8 == '\x01')))) ||
       (iVar10 = FUN_01d3a5a0(), iVar10 == 1)) break;
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 007f65e0
// ============================================================
// Function: FUN_007f65e0
// Address: 007f65e0
// Size: 643 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

uint64_t FUN_007f65e0(uint64_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    uVar6 = FUN_007f4cf0();
    (**(code **)("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit" + *local_48 + 0x18)
    )(uVar6,1);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = this_ptr;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f66d7;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f66d7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026f07f8 = FUN_000f5df0();
        g_026f07e0 = "GNPullDownButton";
        g_026f07e8 = 600;
        g_026f07f0 = FUN_001e7840;
        g_026f0800 = 0;
        ram_00000000026f0808 = 0;
        g_026f0810 = 0;
        ram_00000000026f0818 = 0;
        g_026f0820 = 0;
        ram_00000000026f0828 = 0;
        g_026f0830 = 0;
        ram_00000000026f0838 = 0;
        g_026f0840 = 0;
        ram_00000000026f0848 = 0;
        g_026f0850 = 0;
        ram_00000000026f0858 = 0;
        g_026f0860 = 0;
        ram_00000000026f0868 = 0;
        g_026f0870 = 0;
        ram_00000000026f0878 = 0;
        g_026f0880 = 0;
        ram_00000000026f0888 = 0;
        g_026f0890 = 0;
        ram_00000000026f0898 = 0;
        g_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_007f6845;
        goto LAB_007f6840;
      }
    } while (plVar5 != (int64_t *)0x0);
    plVar5 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_007f6840:
      FUN_00d50b20();
    }
LAB_007f6845:
    FUN_01d7c320();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 007f6250
// ============================================================
// Function: FUN_007f6250
// Address: 007f6250
// Size: 643 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

uint64_t FUN_007f6250(uint64_t param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = FUN_007f4cf0();
  (**(code **)(&UNK_000015a8 + *local_48))(uVar6,param_2);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((char)param_2 != '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = this_ptr;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f6347;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f6347:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026f07f8 = FUN_000f5df0();
        g_026f07e0 = "GNPullDownButton";
        g_026f07e8 = 600;
        g_026f07f0 = FUN_001e7840;
        g_026f0800 = 0;
        ram_00000000026f0808 = 0;
        g_026f0810 = 0;
        ram_00000000026f0818 = 0;
        g_026f0820 = 0;
        ram_00000000026f0828 = 0;
        g_026f0830 = 0;
        ram_00000000026f0838 = 0;
        g_026f0840 = 0;
        ram_00000000026f0848 = 0;
        g_026f0850 = 0;
        ram_00000000026f0858 = 0;
        g_026f0860 = 0;
        ram_00000000026f0868 = 0;
        g_026f0870 = 0;
        ram_00000000026f0878 = 0;
        g_026f0880 = 0;
        ram_00000000026f0888 = 0;
        g_026f0890 = 0;
        ram_00000000026f0898 = 0;
        g_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_007f64b5;
        goto LAB_007f64b0;
      }
    } while (plVar5 != (int64_t *)0x0);
    plVar5 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_007f64b0:
      FUN_00d50b20();
    }
LAB_007f64b5:
    FUN_01d7c320();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 007f5ec0
// ============================================================
// Function: FUN_007f5ec0
// Address: 007f5ec0
// Size: 643 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

uint64_t FUN_007f5ec0(uint64_t param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = FUN_007f4cf0();
  (**(code **)(&UNK_00001590 + *local_48))(uVar6,param_2);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((char)param_2 != '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = this_ptr;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f5fb7;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f5fb7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026f07f8 = FUN_000f5df0();
        g_026f07e0 = "GNPullDownButton";
        g_026f07e8 = 600;
        g_026f07f0 = FUN_001e7840;
        g_026f0800 = 0;
        ram_00000000026f0808 = 0;
        g_026f0810 = 0;
        ram_00000000026f0818 = 0;
        g_026f0820 = 0;
        ram_00000000026f0828 = 0;
        g_026f0830 = 0;
        ram_00000000026f0838 = 0;
        g_026f0840 = 0;
        ram_00000000026f0848 = 0;
        g_026f0850 = 0;
        ram_00000000026f0858 = 0;
        g_026f0860 = 0;
        ram_00000000026f0868 = 0;
        g_026f0870 = 0;
        ram_00000000026f0878 = 0;
        g_026f0880 = 0;
        ram_00000000026f0888 = 0;
        g_026f0890 = 0;
        ram_00000000026f0898 = 0;
        g_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_007f6125;
        goto LAB_007f6120;
      }
    } while (plVar5 != (int64_t *)0x0);
    plVar5 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_007f6120:
      FUN_00d50b20();
    }
LAB_007f6125:
    FUN_01d7c320();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 00501f20
// ============================================================
// Function: FUN_00501f20
// Address: 00501f20
// Size: 505 bytes
// Class: GNPullDownButton

uint64_t FUN_00501f20(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00501f7a:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501f7a;
    }
    plVar1 = *pplVar5;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) goto LAB_00501fa1;
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_005020f4;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_005020f4:
      FUN_01d66ab0();
      FUN_00d50b20();
    }
  }
  else {
LAB_00501fa1:
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00501fdc:
      pplVar5 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501fdc;
    }
    plVar2 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      if ((char)param_2 == '\0') {
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_005020a6;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_005020a6:
          FUN_01b18580();
          FUN_01d66ab0();
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = FUN_01b18580();
        FUN_00502230(param_1,iVar4 != 1);
      }
      uVar6 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_00502108;
    }
  }
  uVar6 = 0;
LAB_00502108:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00501c20
// ============================================================
// Function: FUN_00501c20
// Address: 00501c20
// Size: 514 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

uint64_t FUN_00501c20(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
LAB_00501d63:
    uVar4 = 1;
  }
  else {
    FUN_0197b900();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00501c81;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_00501c81:
      pplVar5 = &local_40;
      (**(code **)(*this_ptr + 0x950))();
      plVar1 = local_40;
      if ((g_026f08a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026f07f8 = FUN_000f5df0();
        g_026f07e0 = "GNPullDownButton";
        g_026f07e8 = 600;
        g_026f07f0 = FUN_001e7840;
        g_026f0800 = 0;
        ram_00000000026f0808 = 0;
        g_026f0810 = 0;
        ram_00000000026f0818 = 0;
        g_026f0820 = 0;
        ram_00000000026f0828 = 0;
        g_026f0830 = 0;
        ram_00000000026f0838 = 0;
        g_026f0840 = 0;
        ram_00000000026f0848 = 0;
        g_026f0850 = 0;
        ram_00000000026f0858 = 0;
        g_026f0860 = 0;
        ram_00000000026f0868 = 0;
        g_026f0870 = 0;
        ram_00000000026f0878 = 0;
        g_026f0880 = 0;
        ram_00000000026f0888 = 0;
        g_026f0890 = 0;
        ram_00000000026f0898 = 0;
        g_026f08a0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
LAB_00501cca:
        pplVar5 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00501cca;
      }
      plVar1 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_007f4c40();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) goto LAB_00501d63;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// 001871b0
// ============================================================
// Function: FUN_001871b0
// Address: 001871b0
// Size: 766 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

void FUN_001871b0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_2b8;
  int64_t local_2a8;
  int64_t local_298;
  
  if ((g_026f08a8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f07f8 = FUN_000f5df0();
    g_026f07e0 = "GNPullDownButton";
    g_026f07e8 = 600;
    g_026f07f0 = FUN_001e7840;
    g_026f0800 = 0;
    ram_00000000026f0808 = 0;
    g_026f0810 = 0;
    ram_00000000026f0818 = 0;
    g_026f0820 = 0;
    ram_00000000026f0828 = 0;
    g_026f0830 = 0;
    ram_00000000026f0838 = 0;
    g_026f0840 = 0;
    ram_00000000026f0848 = 0;
    g_026f0850 = 0;
    ram_00000000026f0858 = 0;
    g_026f0860 = 0;
    ram_00000000026f0868 = 0;
    g_026f0870 = 0;
    ram_00000000026f0878 = 0;
    g_026f0880 = 0;
    ram_00000000026f0888 = 0;
    g_026f0890 = 0;
    _ram_00000000026f0898 = 0;
    g_026f08a0 = 0;
    ___cxa_guard_release();
  }
  if (g_026f089b == '\0') {
    FUN_000f5b20();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01d76930();
    FUN_00e87920(uVar2,0);
    FUN_01d76ae0();
    if (local_298 != 0) {
      FUN_00d50b20();
    }
    if (local_2a8 != 0) {
      FUN_00d50b20();
    }
    if (local_2b8 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}



// ============================================================
// 001e7990
// ============================================================
// Function: FUN_001e7990
// Address: 001e7990
// Size: 1256 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

void FUN_001e7990(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000fabd0();
  *this_ptr = &g_02687f80;
  this_ptr[2] = &g_02688a68;
  this_ptr[0x39] = &g_02688aa8;
  FUN_001e7f20();
  *(void*)(this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8210();
    FUN_00e87980();
  }
  FUN_001e8380();
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8670();
    FUN_00e87980();
  }
  FUN_001e87e0();
  *(void*)(this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8ad0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8c40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8db0();
    FUN_00e87980();
  }
  return;
}

