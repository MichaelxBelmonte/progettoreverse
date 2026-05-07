// Function: FUN_00ad4740
// Address: 00ad4740
// Size: 1151 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ad4740(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  string *psVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  string *psVar13;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  string *psVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar18;
  undefined8 local_48;
  string *psStack_40;
  undefined1 *local_38;
  string *psVar14;
  
  iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x18))();
  uVar17 = 0;
  local_48 = 0;
  psStack_40 = (string *)0x0;
  local_38 = (undefined1 *)0x0;
  if (*(char *)(unaff_RDI + 0x78) == '\0') {
    uVar17 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x38))(0,1);
  }
  *(undefined1 *)(unaff_RDI + 0x78) = 1;
  if (*(char *)(unaff_RDI + 0x79) != '\"') {
    cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x20))();
    uVar17 = extraout_XMM0_Da;
    if (cVar3 != '\0') {
      uVar17 = FUN_00ad3660();
    }
    if ((local_48 & 1) == 0) {
      local_48 = local_48 & 0xffffffffffff0000;
    }
    else {
      *local_38 = 0;
      psStack_40 = (string *)0x0;
    }
    cVar3 = *(char *)(unaff_RDI + 0x78);
    iVar16 = iVar4;
    while( true ) {
      if (cVar3 == '\0') {
        (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x38))(uVar17,1);
      }
      *(undefined1 *)(unaff_RDI + 0x78) = 1;
      uVar12 = *(byte *)(unaff_RDI + 0x79) - 0x2b;
      psVar14 = (string *)(ulonglong)uVar12;
      bVar11 = (byte)uVar12;
      psVar13 = psVar14;
      if ((0x3a < bVar11) ||
         (psVar13 = (string *)((ulonglong)psVar14 & 0xff),
         (0x400000004007fedU >> ((ulonglong)psVar14 & 0x3f) & 1) == 0)) break;
      *(undefined1 *)(unaff_RDI + 0x78) = 0;
      uVar17 = std::string::push_back(bVar11);
      iVar16 = iVar16 + 1;
      cVar3 = *(char *)(unaff_RDI + 0x78);
    }
    uVar18 = FUN_00ad4e80();
    goto LAB_00ad4a61;
  }
  iVar5 = FUN_00ad3c00(uVar17,1);
  uVar2 = local_48;
  psVar14 = (string *)(local_48 & 0xff);
  psVar15 = (string *)(local_48 >> 1 & 0x7f);
  psVar8 = psVar15;
  if ((local_48 & 1) != 0) {
    psVar8 = psStack_40;
  }
  psVar13 = DAT_028a0c18;
  if ((DAT_028a0c10 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c10 >> 1);
  }
  if (psVar8 == psVar13) {
    iVar16 = iVar5 + iVar4;
    puVar1 = DAT_028a0c20;
    if ((DAT_028a0c10 & 1) == 0) {
      puVar1 = &DAT_028a0c11;
    }
    if ((local_48 & 1) == 0) {
      uVar18 = DAT_023908c8;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar7[(longlong)&local_48 + 1];
          if (psVar7[(longlong)&local_48 + 1] != psVar7[(longlong)puVar1]) goto LAB_00ad4884;
          psVar7 = psVar7 + 1;
          uVar18 = DAT_023908c8;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = DAT_023908c8;
    if ((psVar8 == (string *)0x0) ||
       (iVar6 = _memcmp(psVar13,psVar8,param_3), uVar18 = DAT_023908c8, iVar6 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4884:
  iVar16 = iVar5 + iVar4;
  psVar13 = DAT_028a0c30;
  if ((DAT_028a0c28 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c28 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = DAT_028a0c38;
    if ((DAT_028a0c28 & 1) == 0) {
      puVar1 = &DAT_028a0c29;
    }
    if ((uVar2 & 1) == 0) {
      uVar18 = DAT_023e1698;
      if (psVar8 != (string *)0x0) {
        psVar7 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar7[(longlong)&local_48 + 1];
          if (psVar7[(longlong)&local_48 + 1] != psVar7[(longlong)puVar1]) goto LAB_00ad4996;
          psVar7 = psVar7 + 1;
          uVar18 = DAT_023e1698;
        } while (psVar15 != psVar7);
      }
      goto LAB_00ad4a61;
    }
    uVar18 = DAT_023e1698;
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), uVar18 = DAT_023e1698, iVar4 == 0))
    goto LAB_00ad4a61;
  }
LAB_00ad4996:
  psVar13 = DAT_028a0c48;
  if ((DAT_028a0c40 & 1) == 0) {
    psVar13 = (string *)(ulonglong)(DAT_028a0c40 >> 1);
  }
  if (psVar8 == psVar13) {
    puVar1 = DAT_028a0c50;
    if ((DAT_028a0c40 & 1) == 0) {
      puVar1 = &DAT_028a0c41;
    }
    uVar18 = DAT_0241f388;
    if ((uVar2 & 1) == 0) {
      if (psVar8 != (string *)0x0) {
        psVar8 = (string *)0x0;
        do {
          psVar13 = (string *)(ulonglong)(byte)psVar8[(longlong)&local_48 + 1];
          if (psVar8[(longlong)&local_48 + 1] != psVar8[(longlong)puVar1]) goto LAB_00ad4a46;
          psVar8 = psVar8 + 1;
        } while (psVar15 != psVar8);
      }
      goto LAB_00ad4a61;
    }
    if ((psVar8 == (string *)0x0) ||
       (iVar4 = _memcmp(psVar13,psVar8,param_3), psVar14 = psVar8, uVar18 = DAT_0241f388, iVar4 == 0
       )) goto LAB_00ad4a61;
  }
LAB_00ad4a46:
  cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x20))();
  if (cVar3 == '\0') {
    puVar9 = (undefined8 *)___cxa_allocate_exception();
    puVar10 = operator_new((ulong)psVar13);
    puVar10[3] = 0x6465746f75712079;
    puVar10[2] = 0x6c64657463657078;
    puVar10[1] = 0x656e752061746164;
    *puVar10 = 0x20636972656d754e;
    *(undefined1 *)(puVar10 + 4) = 0;
    *puVar9 = &DAT_02517278;
    uVar17 = std::string::string((string *)0x20636972656d754e,psVar14);
    *puVar9 = &DAT_02517250;
    *(undefined4 *)(puVar9 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar17,FUN_0088de20);
  }
  uVar18 = FUN_00ad4e80();
LAB_00ad4a61:
  *unaff_RSI = uVar18;
  if ((local_48 & 1) != 0) {
    operator_delete(psVar13);
  }
  return iVar16;
}


