// Function: FUN_009ddc0e
// Address: 009ddc0e
// Size: 2588 bytes
// Class: GNList


longlong FUN_009ddc0e(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  void *pvVar18;
  void *pvVar19;
  byte bVar20;
  longlong *plVar21;
  void *pvVar22;
  void *pvVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  char *pcVar26;
  longlong *unaff_RSI;
  undefined8 *puVar27;
  longlong *unaff_RDI;
  longlong *plVar28;
  char *pcVar29;
  char *pcVar30;
  undefined4 uVar31;
  ulonglong local_98;
  void *pvStack_90;
  void *local_88;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  undefined8 local_78;
  void *pvStack_70;
  void *local_68;
  char local_51;
  undefined1 local_50;
  char cStack_4f;
  undefined1 uStack_4e;
  undefined2 uStack_4d;
  undefined3 uStack_4b;
  undefined5 local_48;
  undefined3 uStack_43;
  void *local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar14 = FUN_009d8a9c(param_1,0x28);
  plVar25 = (longlong *)*unaff_RSI;
  plVar28 = unaff_RSI + 1;
  iVar13 = 0;
  plVar5 = plVar25;
  while (plVar5 != plVar28) {
    plVar21 = (longlong *)plVar5[1];
    if ((longlong *)plVar5[1] == (longlong *)0x0) {
      plVar16 = (longlong *)plVar5[2];
      if ((longlong *)*plVar16 != plVar5) {
        do {
          plVar5 = (longlong *)plVar5[2];
          plVar16 = (longlong *)plVar5[2];
        } while ((longlong *)*plVar16 != plVar5);
      }
    }
    else {
      do {
        plVar16 = plVar21;
        plVar21 = (longlong *)*plVar16;
      } while ((longlong *)*plVar16 != (longlong *)0x0);
    }
    iVar13 = iVar13 + 1;
    plVar5 = plVar16;
  }
  *(int *)(lVar14 + 0x10) = iVar13;
  pcVar29 = (char *)unaff_RSI[3];
  pcVar30 = (char *)unaff_RSI[4];
  *(uint *)(lVar14 + 0x14) =
       (uint)((ulonglong)((longlong)pcVar30 - (longlong)pcVar29) >> 2) & 0x7fffffff;
  plVar21 = (longlong *)unaff_RSI[8];
  plVar5 = unaff_RSI + 9;
  if (plVar21 == plVar5) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      plVar16 = (longlong *)plVar21[1];
      if ((longlong *)plVar21[1] == (longlong *)0x0) {
        plVar8 = (longlong *)plVar21[2];
        if (*(longlong **)plVar21[2] != plVar21) {
          do {
            plVar21 = (longlong *)plVar21[2];
            plVar8 = (longlong *)plVar21[2];
          } while (*(longlong **)plVar21[2] != plVar21);
        }
      }
      else {
        do {
          plVar21 = (longlong *)*plVar16;
          plVar8 = plVar16;
          plVar16 = plVar21;
        } while (plVar21 != (longlong *)0x0);
      }
      plVar21 = plVar8;
      iVar13 = iVar13 + 1;
    } while (plVar21 != plVar5);
  }
  *(int *)(lVar14 + 0x18) = iVar13;
  uVar1 = *(uint *)((longlong)unaff_RSI + 0x34);
  *(uint *)(lVar14 + 0x1c) = uVar1;
  uVar2 = *(uint *)(unaff_RSI + 7);
  *(uint *)(lVar14 + 0x20) = uVar2;
  lVar6 = *unaff_RDI;
  if ((*(byte *)(lVar6 + 0x2a) & 0x10) == 0) goto LAB_009dddab;
  uVar3 = *(uint *)(unaff_RDI + 0xb);
  if ((uVar3 & uVar1) == uVar3) {
LAB_009ddd79:
    *(uint *)(lVar14 + 0x1c) = uVar1 | *(uint *)(unaff_RDI + 0xc);
  }
  else {
    uVar4 = *(uint *)((longlong)unaff_RDI + 0x5c);
    param_3 = (ulonglong)uVar4;
    if ((uVar4 & uVar1) == uVar4) goto LAB_009ddd79;
  }
  if (((uVar3 & uVar2) == uVar3) ||
     ((*(uint *)((longlong)unaff_RDI + 0x5c) & uVar2) == *(uint *)((longlong)unaff_RDI + 0x5c))) {
    *(uint *)(lVar14 + 0x20) = uVar2 | *(uint *)(unaff_RDI + 0xc);
  }
LAB_009dddab:
  *(char *)(lVar14 + 0x24) = (char)unaff_RSI[6];
  *(byte *)(lVar14 + 0x25) = *(byte *)((longlong)unaff_RSI + 0x31) ^ 1;
  lVar6 = *(longlong *)(lVar6 + 0x160);
  if (plVar25 != plVar28) {
    do {
      puVar15 = (undefined1 *)FUN_009dedb6();
      uVar9 = *(undefined1 *)((longlong)plVar25 + 0x19);
      if ((char)unaff_RDI[3] != '\0') {
        uVar9 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
      }
      *puVar15 = uVar9;
      if (*(char *)((longlong)plVar25 + 0x19) != '\0') {
        cVar10 = *(char *)((longlong)plVar25 + 0x1a);
        if (cVar10 == '\0') {
          puVar15 = puVar15 + 1;
        }
        else {
          if ((char)unaff_RDI[3] != '\0') {
            cVar10 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
          }
          puVar15[1] = cVar10;
          puVar15 = puVar15 + 2;
        }
      }
      *puVar15 = 0;
      plVar21 = (longlong *)plVar25[1];
      if ((longlong *)plVar25[1] == (longlong *)0x0) {
        plVar16 = (longlong *)plVar25[2];
        if ((longlong *)*plVar16 != plVar25) {
          do {
            plVar25 = (longlong *)plVar25[2];
            plVar16 = (longlong *)plVar25[2];
          } while ((longlong *)*plVar16 != plVar25);
        }
      }
      else {
        do {
          plVar16 = plVar21;
          plVar21 = (longlong *)*plVar16;
        } while ((longlong *)*plVar16 != (longlong *)0x0);
      }
      plVar25 = plVar16;
    } while (plVar16 != plVar28);
    pcVar29 = (char *)unaff_RSI[3];
    pcVar30 = (char *)unaff_RSI[4];
  }
  if (pcVar29 != pcVar30) {
    puVar24 = (undefined8 *)((ulonglong)&local_78 | 3);
    puVar27 = (undefined8 *)((ulonglong)&local_98 | 3);
    pcVar29 = pcVar29 + 3;
    do {
      cVar10 = pcVar29[-3];
      cVar11 = pcVar29[-2];
      if (((char)unaff_RDI[3] == '\0') ||
         (cVar10 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))(),
         (char)unaff_RDI[3] == '\0')) {
        cVar12 = pcVar29[-1];
        local_51 = *pcVar29;
      }
      else {
        cVar11 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        cVar12 = pcVar29[-1];
        local_51 = *pcVar29;
        if (((char)unaff_RDI[3] != '\0') &&
           (cVar12 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))(),
           (char)unaff_RDI[3] != '\0')) {
          local_51 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        }
      }
      local_78 = 0;
      pvStack_70 = (void *)0x0;
      local_68 = (void *)0x0;
      local_88 = (void *)0x0;
      local_98 = 0;
      pvStack_90 = (void *)0x0;
      if ((*(byte *)(*unaff_RDI + 0x2a) & 0x20) == 0) {
        if (cVar11 == '\0') {
          local_78 = (ulonglong)CONCAT11(cVar10,2);
          *(ulonglong *)((longlong)puVar24 + 5) = CONCAT53(local_48,uStack_4b);
          *puVar24 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
          local_98._0_1_ = 0;
        }
        else {
          uVar31 = std::string::insert(unaff_RDI,(int)cVar10);
          std::string::insert(uVar31,(int)cVar11);
        }
        cVar10 = local_51;
        pvVar18 = (void *)((ulonglong)&local_98 | 1);
        if (((byte)local_98 & 1) != 0) {
          pvVar18 = local_88;
        }
        if (local_51 == '\0') {
          std::string::insert(pvVar18,(int)cVar12);
        }
        else {
          uVar31 = std::string::insert(pvVar18,(int)cVar12);
          std::string::insert(uVar31,(int)cVar10);
        }
      }
      else {
        local_7c = '\0';
        local_7a = local_51;
        local_79 = '\0';
        pcVar26 = &local_7c;
        if (cVar11 == '\0') {
          pcVar26 = &local_7d;
        }
        local_7e = cVar10;
        local_7d = cVar11;
        local_7b = cVar12;
        FUN_009d76b8(0,&local_7e);
        if ((local_78 & 1) != 0) {
          operator_delete(pcVar26);
        }
        local_68 = local_40;
        local_78 = CONCAT35(uStack_4b,
                            CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        pvStack_70 = (void *)CONCAT35(uStack_43,local_48);
        pcVar26 = &local_79;
        if (local_7a == '\0') {
          pcVar26 = &local_7a;
        }
        FUN_009d76b8(pcVar26,&local_7b);
        if ((local_98 & 1) != 0) {
          operator_delete(pcVar26);
        }
        local_88 = local_40;
        local_98 = CONCAT35(uStack_4b,
                            CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        pvStack_90 = (void *)CONCAT35(uStack_43,local_48);
        pvVar18 = pvStack_70;
        if ((local_78 & 1) == 0) {
          pvVar18 = (void *)(local_78 >> 1 & 0x7f);
        }
        if (pvVar18 == (void *)0x0) {
          if ((local_78 & 1) != 0) {
            operator_delete((void *)0x0);
          }
          local_78 = CONCAT53(local_78._3_5_,2);
          *(ulonglong *)((longlong)puVar24 + 5) = CONCAT53(local_48,uStack_4b);
          *puVar24 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        }
        pvVar18 = pvStack_90;
        if ((local_98 & 1) == 0) {
          pvVar18 = (void *)(local_98 >> 1 & 0x7f);
        }
        if (pvVar18 == (void *)0x0) {
          if ((local_98 & 1) != 0) {
            operator_delete((void *)0x0);
          }
          local_98 = CONCAT53(local_98._3_5_,2);
          pvVar18 = (void *)CONCAT53(local_48,uStack_4b);
          *(void **)((longlong)puVar27 + 5) = pvVar18;
          *puVar27 = CONCAT35(uStack_4b,
                              CONCAT23(uStack_4d,CONCAT12(uStack_4e,CONCAT11(cStack_4f,local_50))));
        }
      }
      uVar7 = local_98;
      bVar20 = (byte)local_78;
      pvVar19 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar19 = (void *)(ulonglong)((byte)local_78 >> 1);
      }
      pvVar23 = pvStack_90;
      if ((local_98 & 1) == 0) {
        pvVar23 = (void *)(local_98 >> 1 & 0x7f);
      }
      pvVar22 = pvVar23;
      if (pvVar19 < pvVar23) {
        pvVar22 = pvVar19;
      }
      if (pvVar22 == (void *)0x0) {
LAB_009de2f1:
        if (pvVar23 < pvVar19) {
LAB_009de5d6:
          if ((uVar7 & 1) != 0) {
            operator_delete(pvVar18);
            bVar20 = (byte)local_78;
          }
          if ((bVar20 & 1) != 0) goto LAB_009de5f2;
          goto LAB_009de5fb;
        }
      }
      else {
        iVar13 = _memcmp(pvVar18,pvVar22,(size_t)param_3);
        if (iVar13 == 0) goto LAB_009de2f1;
        if (iVar13 < 0) goto LAB_009de5d6;
      }
      lVar17 = FUN_009dedb6();
      pvVar18 = (void *)(ulonglong)((byte)local_78 >> 1);
      bVar20 = (byte)local_78 & 1;
      pvVar19 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar19 = pvVar18;
      }
      if (pvVar19 != (void *)0x0) {
        _memmove((void *)(ulonglong)bVar20,pvVar19,(size_t)param_3);
        bVar20 = (byte)local_78 & 1;
        pvVar18 = (void *)(ulonglong)((byte)local_78 >> 1);
      }
      if (bVar20 != 0) {
        pvVar18 = pvStack_70;
      }
      *(undefined1 *)(lVar17 + (longlong)pvVar18) = 0;
      pvVar18 = pvStack_70;
      if ((local_78 & 1) == 0) {
        pvVar18 = (void *)(local_78 >> 1 & 0x7f);
      }
      pvVar19 = (void *)(ulonglong)((byte)local_98 >> 1);
      pvVar22 = (void *)(ulonglong)((byte)local_98 & 1);
      pvVar23 = pvStack_90;
      if ((local_98 & 1) == 0) {
        pvVar23 = pvVar19;
      }
      if (pvVar23 != (void *)0x0) {
        _memmove(pvVar22,pvVar23,(size_t)param_3);
        pvVar22 = (void *)(ulonglong)((byte)local_98 & 1);
        pvVar19 = (void *)(ulonglong)((byte)local_98 >> 1);
      }
      if ((char)pvVar22 != '\0') {
        pvVar19 = pvStack_90;
      }
      *(undefined1 *)((longlong)pvVar18 + lVar17 + 1 + (longlong)pvVar19) = 0;
      if ((local_98 & 1) != 0) {
        operator_delete(pvVar22);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(pvVar22);
      }
      pcVar26 = pcVar29 + 1;
      pcVar29 = pcVar29 + 4;
    } while (pcVar26 != pcVar30);
  }
  plVar25 = (longlong *)unaff_RSI[8];
  do {
    if (plVar25 == plVar5) {
      lVar14 = (lVar14 - lVar6) + *(longlong *)(*unaff_RDI + 0x160);
      unaff_RDI[2] = lVar14;
LAB_009de5fd:
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
        return lVar14;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    local_78 = 0;
    pvStack_70 = (void *)0x0;
    local_68 = (void *)0x0;
    if (*(char *)((longlong)plVar25 + 0x1a) == '\0') {
      puVar15 = (undefined1 *)((longlong)plVar25 + 0x1a);
      FUN_009dedf4();
    }
    else {
      local_50 = *(undefined1 *)((longlong)plVar25 + 0x19);
      uStack_4e = 0;
      puVar15 = &uStack_4e;
      cStack_4f = *(char *)((longlong)plVar25 + 0x1a);
      FUN_009dedf4(puVar15,&local_50);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(puVar15);
    }
    local_68 = local_88;
    pvStack_70 = pvStack_90;
    local_78 = local_98;
    pvVar18 = pvStack_90;
    if ((local_98 & 1) == 0) {
      pvVar18 = (void *)(local_98 >> 1 & 0x7f);
    }
    if (pvVar18 == (void *)0x0) {
      pvVar18 = pvStack_90;
      if ((local_98 & 1) != 0) {
LAB_009de5f2:
        operator_delete(pvVar18);
      }
LAB_009de5fb:
      lVar14 = 0;
      goto LAB_009de5fd;
    }
    lVar17 = FUN_009dedb6();
    pvVar18 = (void *)(ulonglong)((byte)local_78 >> 1);
    pvVar23 = (void *)(ulonglong)((byte)local_78 & 1);
    pvVar19 = pvStack_70;
    if ((local_78 & 1) == 0) {
      pvVar19 = pvVar18;
    }
    if (pvVar19 != (void *)0x0) {
      _memmove(pvVar23,pvVar19,(size_t)param_3);
      pvVar23 = (void *)(ulonglong)((byte)local_78 & 1);
      pvVar18 = (void *)(ulonglong)((byte)local_78 >> 1);
    }
    if ((char)pvVar23 != '\0') {
      pvVar18 = pvStack_70;
    }
    *(undefined1 *)(lVar17 + (longlong)pvVar18) = 0;
    plVar28 = (longlong *)plVar25[1];
    if ((longlong *)plVar25[1] == (longlong *)0x0) {
      plVar21 = (longlong *)plVar25[2];
      if ((longlong *)*plVar21 != plVar25) {
        do {
          plVar25 = (longlong *)plVar25[2];
          plVar21 = (longlong *)plVar25[2];
        } while ((longlong *)*plVar21 != plVar25);
      }
    }
    else {
      do {
        plVar21 = plVar28;
        plVar28 = (longlong *)*plVar21;
      } while ((longlong *)*plVar21 != (longlong *)0x0);
    }
    plVar25 = plVar21;
    if ((local_78 & 1) != 0) {
      operator_delete(pvVar23);
    }
  } while( true );
}


