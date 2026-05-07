// Function: FUN_00e1f680
// Address: 00e1f680
// Size: 2327 bytes
// Class: GNFileType

uint32_t FUN_00e1f680(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t lVar4;
  uint32_t uVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  void*puVar10;
  void*puVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  void*puVar14;
  char *pcVar15;
  void*puVar16;
  short sVar17;
  void*puVar18;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar19;
  int iVar20;
  void*puVar21;
  bool bVar22;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  void*local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t *local_40;
  
  if (*this_ptr == 0) {
    return 0;
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  (*pcVar3)();
  local_60 = puVar11;
  if (param_2 != '\0') {
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *this_ptr;
    if (lVar1 == local_50) {
      if (((char)this_ptr[1] != '\0') || (local_50 == 0)) goto LAB_00e1f7ab;
      local_58 = this_ptr + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f7a4;
      }
LAB_00e1f76f:
      *(void*)local_58 = 1;
    }
    else {
      local_58 = this_ptr + 1;
      lVar2 = this_ptr[1];
      if (local_48[0] != '\0') {
        *this_ptr = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f76f;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar4;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00e1f7a4:
      *(void*)local_58 = 1;
LAB_00e1f7ab:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_00e1f856;
      local_58 = arg1 + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f84f;
      }
    }
    else {
      local_58 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = lVar4;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00e1f84f:
        *(void*)local_58 = 1;
LAB_00e1f856:
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f86a;
      }
      *arg1 = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_58 = 1;
  }
LAB_00e1f86a:
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar12[2] = 0;
  plVar12[3] = 0;
  puVar16 = &g_02587ce8;
  *plVar12 = (int64_t)&g_02587ce8;
  (*g_02587d00)();
  (**(code **)(*plVar12 + 0x368))();
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar13 = (int64_t)&g_025880b0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  FUN_00d500e0();
  local_40 = plVar13;
  (**(code **)(*plVar13 + 0x368))();
  uVar9 = (**(code **)(*plVar12 + 0x3a0))();
  if ((ushort)(uVar9 - 0x2a) < 0x34) {
    local_58 = (int64_t *)CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((uint64_t)puVar16 >> 8),1))
    ;
    puVar16 = (void*)0xa000000200001;
    if ((0xa000000200001U >> ((uint64_t)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) != 0)
    goto LAB_00e1f988;
  }
  local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
LAB_00e1f988:
  sVar7 = (**(code **)(*local_40 + 0x3a0))();
  iVar20 = 0;
  puVar14 = (void*)(uint64_t)uVar9;
  uVar5 = 0;
LAB_00e1f9b0:
  do {
    while( true ) {
      do {
        while( true ) {
          sVar8 = sVar7;
          uVar19 = uVar5;
          puVar21 = puVar14;
          plVar13 = local_40;
          puVar18 = (void*)((uint64_t)puVar21 & 0xffffffff);
          sVar17 = (short)puVar18;
          puVar14 = puVar18;
          uVar5 = uVar19;
          if (iVar20 == 0) break;
          if (iVar20 == 1) {
            if ((sVar17 != 0x3f) || (((uint64_t)local_58 & 1) == 0)) {
              while ((sVar8 != 0 && (sVar17 != sVar8))) {
                sVar8 = (**(code **)(*plVar13 + 0x3a0))();
              }
            }
            iVar20 = 0;
            sVar7 = 0;
            if (sVar8 != 0) {
              (**(code **)(*local_40 + 0x380))();
              FUN_00d46530();
              lVar1 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_48[0] = '\0';
              local_50 = lVar1;
              FUN_00d21140();
              if ((local_48[0] != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar12 + 0x380))();
              FUN_00d46530();
              lVar1 = CONCAT71(uStack_6f,local_70);
              if (local_68 == '\0') {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_48[0] = '\0';
              local_50 = lVar1;
              FUN_00d21140();
              if ((local_48[0] != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                FUN_00d50b20();
              }
              iVar20 = 0;
              puVar14 = (void*)((uint64_t)puVar21 & 0xffff);
              sVar7 = sVar8;
            }
          }
          else {
            sVar7 = sVar8;
            if (iVar20 == 2) {
              if (local_60 != (void*)0x0) {
                FUN_00d50b20();
              }
              plVar13 = local_40;
              if (puVar10 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (plVar12 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              return uVar19;
            }
          }
        }
        iVar20 = 2;
        puVar14 = (void*)0x0;
        uVar5 = 1;
        sVar7 = 0;
      } while (sVar17 == 0 && sVar8 == 0);
      if ((((uint64_t)local_58 & 1) == 0) || (sVar17 != 0x2a)) break;
      do {
        puVar14 = (void*)(**(code **)(*plVar12 + 0x3a0))();
      } while ((short)puVar14 == 0x2a);
      uVar9 = (int)puVar14 - 0x3f;
      if ((ushort)uVar9 < 0x1f) {
        uVar9 = uVar9 & 0xffff;
        puVar16 = (void*)0x50000001;
        if ((0x50000001UL >> ((uint64_t)uVar9 & 0x3f) & 1) == 0) goto LAB_00e1fd81;
        local_58 = (int64_t *)CONCAT44(local_58._4_4_,(int)CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
      }
      else {
LAB_00e1fd81:
        local_58 = (int64_t *)((uint64_t)local_58._4_4_ << 0x20);
      }
      iVar20 = 1;
      uVar5 = uVar19;
      sVar7 = sVar8;
    }
    bVar22 = ((uint64_t)local_58 & 1) == 0;
    if ((!bVar22) && ((sVar17 == 0x3f && (sVar8 != 0)))) {
      puVar14 = (void*)(**(code **)(*plVar12 + 0x3a0))();
      uVar9 = (int)puVar14 - 0x2a;
      if ((ushort)uVar9 < 0x34) {
        local_58 = (int64_t *)
                   CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((uint64_t)puVar16 >> 8),1));
        puVar16 = (void*)0xa000000200001;
        if ((0xa000000200001U >> ((uint64_t)(uVar9 & 0xffff) & 0x3f) & 1) == 0) goto LAB_00e1ff31;
      }
      else {
LAB_00e1ff31:
        local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
      }
      iVar20 = 0;
      sVar7 = (**(code **)(*local_40 + 0x3a0))();
      uVar5 = uVar19;
      goto LAB_00e1f9b0;
    }
    puVar16 = (void*)CONCAT71((int7)((uint64_t)puVar16 >> 8),sVar17 != 0x5b);
    if ((bVar22 || sVar17 != 0x5b) || (sVar8 == 0)) {
      if (sVar17 == sVar8) {
        puVar14 = (void*)(**(code **)(*plVar12 + 0x3a0))();
        uVar9 = (int)puVar14 - 0x2a;
        if ((ushort)uVar9 < 0x34) {
          local_58 = (int64_t *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((uint64_t)puVar16 >> 8),1));
          puVar16 = (void*)0xa000000200001;
          if ((0xa000000200001U >> ((uint64_t)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1ff3d;
        }
        else {
LAB_00e1ff3d:
          local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
        }
        iVar20 = 0;
        sVar7 = (**(code **)(*local_40 + 0x3a0))();
        uVar5 = uVar19;
      }
      else {
        iVar20 = 2;
        puVar14 = puVar18;
        uVar5 = 0;
        sVar7 = sVar8;
        if (*(int *)((int64_t)local_60 + 0xc) != 0) {
          FUN_00d23340();
          plVar13 = local_40;
          lVar1 = local_50;
          local_70 = local_48[0];
          pcVar15 = local_48;
          if (local_48[0] == '\0') {
            pcVar15 = &local_70;
          }
          *pcVar15 = '\0';
          if ((local_48[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d45870();
          (**(code **)(*plVar13 + 0x378))();
          if ((local_70 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar13 + 0x3a8))();
          FUN_00d23740();
          FUN_00d23340();
          lVar1 = local_50;
          local_70 = local_48[0];
          pcVar15 = local_48;
          if (local_48[0] == '\0') {
            pcVar15 = &local_70;
          }
          *pcVar15 = '\0';
          if ((local_48[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d45870();
          puVar16 = (void*)*plVar12;
          (**(code **)(puVar16 + 0x378))();
          if ((local_70 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x3a8))();
          FUN_00d23740();
          puVar14 = (void*)(**(code **)(*plVar12 + 0x3a0))();
          uVar9 = (int)puVar14 - 0x2a;
          if ((ushort)uVar9 < 0x34) {
            local_58 = (int64_t *)
                       CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((uint64_t)puVar16 >> 8),1));
            puVar16 = (void*)0xa000000200001;
            if ((0xa000000200001U >> ((uint64_t)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
            goto LAB_00e1fee1;
          }
          else {
LAB_00e1fee1:
            local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
          }
          iVar20 = 1;
          sVar7 = (**(code **)(*local_40 + 0x3a0))();
          uVar5 = uVar19;
        }
      }
    }
    else {
      (**(code **)(*plVar12 + 0x3b0))();
      lVar1 = local_50;
      if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != 0)) {
        FUN_00d50b20();
      }
      cVar6 = FUN_00e1f540();
      if (cVar6 == '\0') {
        puVar14 = (void*)CONCAT62((int6)((uint64_t)puVar16 >> 0x10),0x5b);
        iVar20 = 2;
        uVar19 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar12 + 0x3a0))();
        puVar14 = (void*)(uint64_t)uVar9;
        if ((ushort)(uVar9 - 0x2a) < 0x34) {
          local_58 = (int64_t *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((uint64_t)puVar16 >> 8),1));
          if ((0xa000000200001U >> ((uint64_t)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1fcf0;
        }
        else {
LAB_00e1fcf0:
          local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
        }
        sVar8 = (**(code **)(*local_40 + 0x3a0))();
        iVar20 = 0;
      }
      puVar16 = puVar14;
      uVar5 = uVar19;
      sVar7 = sVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  } while( true );
}

