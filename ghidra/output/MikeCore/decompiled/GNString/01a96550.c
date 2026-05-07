// Function: FUN_01a96550
// Address: 01a96550
// Size: 1743 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01a966fa) */
/* WARNING: Removing unreachable block (ram,0x01a96706) */
/* WARNING: Removing unreachable block (ram,0x01a96686) */
/* WARNING: Removing unreachable block (ram,0x01a9668f) */
/* WARNING: Removing unreachable block (ram,0x01a96b63) */
/* WARNING: Removing unreachable block (ram,0x01a96b6f) */
/* WARNING: Removing unreachable block (ram,0x01a9664a) */
/* WARNING: Removing unreachable block (ram,0x01a96653) */
/* WARNING: Removing unreachable block (ram,0x01a965ac) */
/* WARNING: Removing unreachable block (ram,0x01a965b5) */
/* WARNING: Removing unreachable block (ram,0x01a96c15) */
/* WARNING: Removing unreachable block (ram,0x01a96c22) */
/* WARNING: Removing unreachable block (ram,0x01a96a0f) */
/* WARNING: Removing unreachable block (ram,0x01a96a2c) */
/* WARNING: Removing unreachable block (ram,0x01a96a11) */
/* WARNING: Removing unreachable block (ram,0x01a96a2e) */

undefined8 FUN_01a96550(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  longlong *unaff_RSI;
  longlong lVar12;
  bool bVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fStack_b4;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  int local_50;
  
  FUN_01a58dc0();
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_68 == (longlong *)0x0) {
    return 0;
  }
  cVar7 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *local_68
                      ))();
  if (cVar7 == '\0') goto LAB_01a96bdd;
  FUN_01d3abf0();
  FUN_01e466c0();
  FUN_01a96f20();
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_01a96721;
    FUN_00d50b00();
LAB_01a96620:
    (**(code **)(*local_68 + 0x928))();
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_68 + 0xe20))();
    local_60 = '\0';
    cVar7 = FUN_00d24090();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      uVar9 = FUN_01d3b590();
      if ((uVar9 & 4) == 0) {
        (**(code **)(*local_68 + 0xda0))();
      }
      (**(code **)(*local_68 + 0xda8))();
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar5 = false;
  }
  else {
    if (local_68 != (longlong *)0x0) goto LAB_01a96620;
LAB_01a96721:
    bVar5 = true;
  }
  iVar8 = FUN_01d3a5a0();
  if (((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) && (*param_2 != 0)) {
    iVar8 = FUN_01d3b620();
    if (iVar8 != 2) {
      FUN_01a58dc0();
      (**(code **)(*local_78 + 0xe30))();
      if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      fStack_b4 = extraout_XMM0_Db;
LAB_01a96800:
      lVar12 = *param_1;
      cVar7 = (char)param_1[1];
      lVar1 = *unaff_RSI;
      if (lVar1 == lVar12) {
        if (cVar7 != '\0') {
          if (((char)unaff_RSI[1] == '\0') && (lVar12 != 0)) {
            cVar7 = '\x01';
            FUN_00d50b00();
            goto LAB_01a96870;
          }
          goto LAB_01a96874;
        }
      }
      else {
        lVar6 = unaff_RSI[1];
        if ((cVar7 != '\0') && (lVar12 != 0)) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar12;
        if (((char)lVar6 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01a96870:
        *(char *)(unaff_RSI + 1) = cVar7;
LAB_01a96874:
        lVar12 = *unaff_RSI;
      }
      if (lVar12 == 0) {
        (**(code **)(*local_68 + 0x658))();
        plVar2 = (longlong *)*unaff_RSI;
        if (plVar2 == local_78) {
          if (((char)unaff_RSI[1] != '\0') || (local_78 == (longlong *)0x0)) goto LAB_01a968dc;
          if (local_70 != '\0') goto LAB_01a968d3;
          FUN_00d50b00();
LAB_01a96931:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar1 = *unaff_RSI;
        }
        else {
          lVar1 = unaff_RSI[1];
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)local_78;
            if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a96931;
          }
          *unaff_RSI = (longlong)local_78;
          if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a968d3:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_70 = '\0';
LAB_01a968dc:
          lVar1 = *unaff_RSI;
        }
        if (lVar1 != 0) goto LAB_01a968e8;
        bVar13 = false;
LAB_01a96944:
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar13) goto LAB_01a96b3f;
      }
      else {
LAB_01a968e8:
        iVar8 = FUN_01d3a5a0();
        bVar13 = iVar8 != 6;
        if (lVar12 == 0) goto LAB_01a96944;
        if (iVar8 == 6) goto LAB_01a96b3f;
      }
      iVar8 = FUN_01d3a5a0();
      if (iVar8 == 5) {
        FUN_01d3abf0();
        FUN_01e466c0();
        dVar4 = (double)((extraout_XMM0_Db_00 - fStack_b4) / DAT_0241b664);
        dVar4 = (double)_exp2(SUB84(dVar4 + dVar4,0));
        fStack_b4 = extraout_XMM0_Db_00;
        if (local_68 != (longlong *)0x0) {
          local_50 = -1;
          while (local_50 = local_50 + 1, local_50 < *(int *)((longlong)local_68 + 0xc)) {
            pVar11 = (pthread_key_t)local_68[2];
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_01299280();
            if (cVar7 != '\0') {
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar3 = (double)FUN_0126e820();
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126e830(SUB84(dVar3 * dVar4,0));
            }
          }
          FUN_001159b0();
        }
      }
      goto LAB_01a96800;
    }
    (**(code **)(*local_68 + 0xe30))();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01a963f0();
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01a96bcb:
  if (!bVar5) {
    FUN_00d50b20();
  }
LAB_01a96bdd:
  FUN_00d50b20();
  return 0;
LAB_01a96b3f:
  FUN_0199eb40();
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01a96bcb;
}


