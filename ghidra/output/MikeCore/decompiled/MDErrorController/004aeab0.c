// Function: FUN_004aeab0
// Address: 004aeab0
// Size: 1880 bytes
// Class: MDErrorController


/* WARNING: Removing unreachable block (ram,0x004af17e) */
/* WARNING: Removing unreachable block (ram,0x004af18a) */
/* WARNING: Removing unreachable block (ram,0x004af1f1) */
/* WARNING: Removing unreachable block (ram,0x004af1fe) */
/* WARNING: Removing unreachable block (ram,0x004aef3e) */
/* WARNING: Removing unreachable block (ram,0x004aef4a) */
/* WARNING: Removing unreachable block (ram,0x004aeebb) */
/* WARNING: Removing unreachable block (ram,0x004aeec4) */
/* WARNING: Removing unreachable block (ram,0x004aecfa) */
/* WARNING: Removing unreachable block (ram,0x004aecff) */
/* WARNING: Removing unreachable block (ram,0x004aec9f) */
/* WARNING: Removing unreachable block (ram,0x004aeca8) */
/* WARNING: Removing unreachable block (ram,0x004aec4d) */
/* WARNING: Removing unreachable block (ram,0x004aec56) */
/* WARNING: Removing unreachable block (ram,0x004aebc5) */
/* WARNING: Removing unreachable block (ram,0x004aebce) */
/* WARNING: Removing unreachable block (ram,0x004aec2c) */
/* WARNING: Removing unreachable block (ram,0x004aec31) */
/* WARNING: Removing unreachable block (ram,0x004aed1e) */
/* WARNING: Removing unreachable block (ram,0x004aed27) */
/* WARNING: Removing unreachable block (ram,0x004aed52) */
/* WARNING: Removing unreachable block (ram,0x004aef1a) */
/* WARNING: Removing unreachable block (ram,0x004aef23) */
/* WARNING: Removing unreachable block (ram,0x004aef82) */
/* WARNING: Removing unreachable block (ram,0x004aef87) */
/* WARNING: Removing unreachable block (ram,0x004af02e) */
/* WARNING: Removing unreachable block (ram,0x004af037) */
/* WARNING: Removing unreachable block (ram,0x004af0d5) */
/* WARNING: Removing unreachable block (ram,0x004af195) */
/* WARNING: Removing unreachable block (ram,0x004af19e) */
/* WARNING: Removing unreachable block (ram,0x004af092) */
/* WARNING: Removing unreachable block (ram,0x004aefbd) */
/* WARNING: Removing unreachable block (ram,0x004aec00) */
/* WARNING: Removing unreachable block (ram,0x004aec09) */
/* WARNING: Removing unreachable block (ram,0x004af069) */
/* WARNING: Removing unreachable block (ram,0x004af072) */
/* WARNING: Removing unreachable block (ram,0x004af0f3) */
/* WARNING: Removing unreachable block (ram,0x004af0fc) */

bool FUN_004aeab0(undefined8 param_1,char param_2,undefined8 param_3,RSA *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  RSA *pRVar8;
  uchar *from;
  RSA *pRVar9;
  longlong unaff_RDI;
  int iVar10;
  uint in_stack_ffffffffffffff18;
  undefined8 *local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  if ((lVar1 != 0) && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00e97840();
    lVar4 = DAT_027092b8;
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
      lVar4 = DAT_027092b8;
    }
    DAT_027092b8 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_00e97870();
    local_40 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_40 = DAT_027092c0;
      in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
      if (DAT_027092c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (((char)in_stack_ffffffffffffff18 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e97f30();
    if (local_40 != 0) {
      FUN_00d50b00();
      FUN_00d8cbf0();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00170e00();
      pRVar9 = (RSA *)0x0;
      pRVar8 = (RSA *)_PEM_read_bio_RSA_PUBKEY(0,0);
      _BIO_free((BIO *)pRVar9);
      if (pRVar8 == (RSA *)0x0) {
LAB_004aeea1:
        local_58 = (undefined8 *)0x0;
      }
      else {
        iVar5 = _RSA_size(pRVar9);
        local_58 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        pRVar9 = (RSA *)&DAT_025683c0;
        *local_58 = &DAT_025683c0;
        (*DAT_025683d8)();
        FUN_00c92170();
        _RSA_size(pRVar9);
        from = (uchar *)FUN_00e83010();
        if (0 < *(int *)(local_40 + 0x18)) {
          iVar10 = *(int *)(local_40 + 0x18);
          do {
            _RSA_size(pRVar9);
            ___bzero();
            iVar3 = iVar5 + -0xb;
            if (iVar10 < iVar5 + -0xb) {
              iVar3 = iVar10;
            }
            pRVar9 = pRVar8;
            iVar6 = _RSA_public_encrypt((int)pRVar8,from,(uchar *)((longlong)&MACH_HEADER.magic + 1)
                                        ,param_4,in_stack_ffffffffffffff18);
            if (iVar6 == -1) {
              FUN_00e83070();
              _RSA_free(pRVar9);
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_004aeea1;
            }
            FUN_00c92190();
            iVar6 = iVar10 - iVar3;
            bVar2 = iVar3 <= iVar10;
            iVar10 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        FUN_00e83070();
        _RSA_free(pRVar9);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027092c8;
      if (local_58 != (undefined8 *)0x0) {
        if (DAT_027092c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar4;
        FUN_00ca0840();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e978a0();
    if (local_40 != 0) {
      FUN_00e978a0();
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027092d0;
      local_40 = DAT_027092d0;
      if (DAT_027092d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ca91d0();
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    FUN_00d93320();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar4 = DAT_026fceb8;
    if (DAT_026fceb8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca93d0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}


