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

