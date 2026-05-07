// Function: FUN_00e1f680
// Address: 00e1f680
// Size: 2327 bytes
// Class: GNFileType


/* WARNING: Removing unreachable block (ram,0x00e1f8ce) */
/* WARNING: Removing unreachable block (ram,0x00e1f8da) */
/* WARNING: Removing unreachable block (ram,0x00e1f93e) */
/* WARNING: Removing unreachable block (ram,0x00e1f94a) */

undefined4 FUN_00e1f680(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined *puVar16;
  short sVar17;
  undefined *puVar18;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar19;
  int iVar20;
  undefined *puVar21;
  bool bVar22;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48 [8];
  longlong *local_40;
  
  if (*unaff_RDI == 0) {
    return 0;
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar3)();
  local_60 = puVar11;
  if (param_2 != '\0') {
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *unaff_RDI;
    if (lVar1 == local_50) {
      if (((char)unaff_RDI[1] != '\0') || (local_50 == 0)) goto LAB_00e1f7ab;
      local_58 = unaff_RDI + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f7a4;
      }
LAB_00e1f76f:
      *(undefined1 *)local_58 = 1;
    }
    else {
      local_58 = unaff_RDI + 1;
      lVar2 = unaff_RDI[1];
      if (local_48[0] != '\0') {
        *unaff_RDI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f76f;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar4;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00e1f7a4:
      *(undefined1 *)local_58 = 1;
LAB_00e1f7ab:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d99300();
    lVar4 = local_50;
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_00e1f856;
      local_58 = unaff_RSI + 1;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
        goto LAB_00e1f84f;
      }
    }
    else {
      local_58 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar4;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00e1f84f:
        *(undefined1 *)local_58 = 1;
LAB_00e1f856:
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e1f86a;
      }
      *unaff_RSI = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_58 = 1;
  }
LAB_00e1f86a:
  plVar12 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar12[2] = 0;
  plVar12[3] = 0;
  puVar16 = &DAT_02587ce8;
  *plVar12 = (longlong)&DAT_02587ce8;
  (*DAT_02587d00)();
  (**(code **)(*plVar12 + 0x368))();
  plVar13 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar13 = (longlong)&DAT_025880b0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  FUN_00d500e0();
  local_40 = plVar13;
  (**(code **)(*plVar13 + 0x368))();
  uVar9 = (**(code **)(*plVar12 + 0x3a0))();
  if ((ushort)(uVar9 - 0x2a) < 0x34) {
    local_58 = (longlong *)CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1))
    ;
    puVar16 = (undefined *)0xa000000200001;
    if ((0xa000000200001U >> ((ulonglong)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) != 0)
    goto LAB_00e1f988;
  }
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
LAB_00e1f988:
  sVar7 = (**(code **)(*local_40 + 0x3a0))();
  iVar20 = 0;
  puVar14 = (undefined *)(ulonglong)uVar9;
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
          puVar18 = (undefined *)((ulonglong)puVar21 & 0xffffffff);
          sVar17 = (short)puVar18;
          puVar14 = puVar18;
          uVar5 = uVar19;
          if (iVar20 == 0) break;
          if (iVar20 == 1) {
            if ((sVar17 != 0x3f) || (((ulonglong)local_58 & 1) == 0)) {
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
              puVar14 = (undefined *)((ulonglong)puVar21 & 0xffff);
              sVar7 = sVar8;
            }
          }
          else {
            sVar7 = sVar8;
            if (iVar20 == 2) {
              if (local_60 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              plVar13 = local_40;
              if (puVar10 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (plVar12 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              return uVar19;
            }
          }
        }
        iVar20 = 2;
        puVar14 = (undefined *)0x0;
        uVar5 = 1;
        sVar7 = 0;
      } while (sVar17 == 0 && sVar8 == 0);
      if ((((ulonglong)local_58 & 1) == 0) || (sVar17 != 0x2a)) break;
      do {
        puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
      } while ((short)puVar14 == 0x2a);
      uVar9 = (int)puVar14 - 0x3f;
      if ((ushort)uVar9 < 0x1f) {
        uVar9 = uVar9 & 0xffff;
        puVar16 = (undefined *)0x50000001;
        if ((0x50000001UL >> ((ulonglong)uVar9 & 0x3f) & 1) == 0) goto LAB_00e1fd81;
        local_58 = (longlong *)CONCAT44(local_58._4_4_,(int)CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
      }
      else {
LAB_00e1fd81:
        local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
      }
      iVar20 = 1;
      uVar5 = uVar19;
      sVar7 = sVar8;
    }
    bVar22 = ((ulonglong)local_58 & 1) == 0;
    if ((!bVar22) && ((sVar17 == 0x3f && (sVar8 != 0)))) {
      puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
      uVar9 = (int)puVar14 - 0x2a;
      if ((ushort)uVar9 < 0x34) {
        local_58 = (longlong *)
                   CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
        puVar16 = (undefined *)0xa000000200001;
        if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0) goto LAB_00e1ff31;
      }
      else {
LAB_00e1ff31:
        local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
      }
      iVar20 = 0;
      sVar7 = (**(code **)(*local_40 + 0x3a0))();
      uVar5 = uVar19;
      goto LAB_00e1f9b0;
    }
    puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),sVar17 != 0x5b);
    if ((bVar22 || sVar17 != 0x5b) || (sVar8 == 0)) {
      if (sVar17 == sVar8) {
        puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
        uVar9 = (int)puVar14 - 0x2a;
        if ((ushort)uVar9 < 0x34) {
          local_58 = (longlong *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
          puVar16 = (undefined *)0xa000000200001;
          if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1ff3d;
        }
        else {
LAB_00e1ff3d:
          local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
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
        if (*(int *)((longlong)local_60 + 0xc) != 0) {
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
          puVar16 = (undefined *)*plVar12;
          (**(code **)(puVar16 + 0x378))();
          if ((local_70 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x3a8))();
          FUN_00d23740();
          puVar14 = (undefined *)(**(code **)(*plVar12 + 0x3a0))();
          uVar9 = (int)puVar14 - 0x2a;
          if ((ushort)uVar9 < 0x34) {
            local_58 = (longlong *)
                       CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
            puVar16 = (undefined *)0xa000000200001;
            if ((0xa000000200001U >> ((ulonglong)(uVar9 & 0xffff) & 0x3f) & 1) == 0)
            goto LAB_00e1fee1;
          }
          else {
LAB_00e1fee1:
            local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
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
        puVar14 = (undefined *)CONCAT62((int6)((ulonglong)puVar16 >> 0x10),0x5b);
        iVar20 = 2;
        uVar19 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar12 + 0x3a0))();
        puVar14 = (undefined *)(ulonglong)uVar9;
        if ((ushort)(uVar9 - 0x2a) < 0x34) {
          local_58 = (longlong *)
                     CONCAT44(local_58._4_4_,(int)CONCAT71((int7)((ulonglong)puVar16 >> 8),1));
          if ((0xa000000200001U >> ((ulonglong)(uVar9 - 0x2a & 0xffff) & 0x3f) & 1) == 0)
          goto LAB_00e1fcf0;
        }
        else {
LAB_00e1fcf0:
          local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
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


