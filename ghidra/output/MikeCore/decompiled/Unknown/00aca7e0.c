// Function: FUN_00aca7e0
// Address: 00aca7e0
// Size: 654 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aca7e0(undefined8 param_1,undefined8 param_2,string *param_3)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  undefined4 extraout_var;
  string *psVar5;
  string *psVar6;
  ulonglong uVar7;
  string *psVar8;
  ulonglong uVar9;
  string *psVar10;
  byte *unaff_RSI;
  ulonglong *unaff_RDI;
  string *psVar11;
  size_t sVar12;
  char *pcVar13;
  undefined1 *puVar4;
  
  sVar12 = (size_t)param_3;
  bVar1 = *unaff_RSI;
  if ((bVar1 & 1) == 0) {
    psVar6 = (string *)(ulonglong)(bVar1 >> 1);
    if (psVar6 == (string *)((longlong)&MACH_HEADER.magic + 2)) goto LAB_00aca820;
LAB_00aca804:
    if (psVar6 != (string *)0x0) {
      psVar11 = *(string **)(unaff_RSI + 0x10);
      goto LAB_00aca83f;
    }
    psVar11 = *(string **)(unaff_RSI + 0x10);
    psVar5 = (string *)0xffffffffffffffff;
LAB_00aca854:
    if ((bVar1 & 1) == 0) {
      psVar10 = (string *)(unaff_RSI + 1);
      psVar8 = (string *)(ulonglong)(bVar1 >> 1);
    }
    else {
      psVar8 = *(string **)(unaff_RSI + 8);
      psVar10 = psVar11;
    }
    if (psVar8 <= psVar5) {
      psVar6 = psVar8;
    }
    do {
      psVar8 = psVar6;
      psVar5 = (string *)0x0;
      if (psVar8 == (string *)0x0) goto LAB_00aca8bb;
      psVar6 = psVar8 + -1;
    } while ((psVar10 + -1)[(longlong)psVar8] != (string)0x2f);
    if ((psVar6 == (string *)0xffffffffffffffff) ||
       ((psVar5 = psVar8, psVar6 == (string *)((longlong)&MACH_HEADER.magic + 1) &&
        (*psVar10 == (string)0x2f)))) goto LAB_00aca8a1;
LAB_00aca8bb:
    if ((bVar1 & 1) != 0) goto LAB_00aca8a7;
LAB_00aca8bf:
    uVar7 = (ulonglong)(bVar1 >> 1);
  }
  else {
    psVar6 = *(string **)(unaff_RSI + 8);
    if (psVar6 != (string *)((longlong)&MACH_HEADER.magic + 2)) goto LAB_00aca804;
LAB_00aca820:
    psVar11 = *(string **)(unaff_RSI + 0x10);
    psVar5 = (string *)(unaff_RSI + 1);
    if ((bVar1 & 1) != 0) {
      psVar5 = psVar11;
    }
    if ((*psVar5 != (string)0x2f) || (psVar5[1] != (string)0x2f)) {
LAB_00aca83f:
      psVar5 = psVar6 + -1;
      psVar10 = (string *)(unaff_RSI + 1);
      if ((bVar1 & 1) != 0) {
        psVar10 = psVar11;
      }
      if ((psVar10 + -1)[(longlong)psVar6] != (string)0x2f) goto LAB_00aca854;
      goto LAB_00aca8bb;
    }
LAB_00aca8a1:
    psVar5 = (string *)0x0;
    if ((bVar1 & 1) == 0) goto LAB_00aca8bf;
LAB_00aca8a7:
    uVar7 = *(ulonglong *)(unaff_RSI + 8);
  }
  if ((psVar5 != (string *)0x0) && (uVar7 != 0)) {
    psVar6 = (string *)(unaff_RSI + 1);
    if ((bVar1 & 1) != 0) {
      psVar6 = psVar11;
    }
    if (psVar6[(longlong)psVar5] == (string)0x2f) {
      psVar11 = psVar5 + 1;
      do {
        if (psVar11 == (string *)((longlong)&MACH_HEADER.magic + 1U)) goto LAB_00aca97d;
        psVar10 = psVar6 + -2 + (longlong)psVar11;
        psVar11 = psVar11 + -1;
      } while (*psVar10 == (string)0x2f);
      if (((psVar11 <= (string *)((longlong)&MACH_HEADER.magic + 2)) || (*psVar6 != (string)0x2f))
         || (psVar6[1] != (string)0x2f)) {
LAB_00acaa03:
        if ((DAT_028a0bb8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_028a0ba0 = 0x2e02;
          DAT_028a0ba2 = 0;
          psVar6 = (string *)0x0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        std::string::string(psVar5,psVar6);
        return;
      }
      if ((bVar1 & 1) == 0) {
        uVar7 = (ulonglong)(bVar1 >> 1);
      }
      else {
        uVar7 = *(ulonglong *)(unaff_RSI + 8);
      }
      psVar10 = (string *)0xffffffffffffffff;
      if (2 < uVar7) {
        param_3 = psVar6 + uVar7;
        uVar9 = 2;
        do {
          if (psVar6[uVar9] == (string)0x2f) {
            psVar8 = psVar6 + uVar9;
            break;
          }
          uVar9 = uVar9 + 1;
          psVar8 = param_3;
        } while (uVar7 != uVar9);
        psVar10 = (string *)0xffffffffffffffff;
        if (psVar8 != param_3) {
          psVar10 = psVar8 + -(longlong)psVar6;
        }
      }
      sVar12 = (size_t)param_3;
      if (psVar10 != psVar11) goto LAB_00acaa03;
    }
  }
LAB_00aca97d:
  sVar2 = _strlen((char *)psVar5);
  puVar4 = (undefined1 *)CONCAT44(extraout_var,sVar2);
  if ((undefined1 *)0xffffffffffffffef < puVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar4) {
    pcVar13 = operator_new((ulong)psVar5);
    unaff_RDI[2] = (ulonglong)pcVar13;
    *unaff_RDI = (ulonglong)(puVar4 + 0x10) & 0xfffffffffffffff0 | 1;
    unaff_RDI[1] = (ulonglong)puVar4;
  }
  else {
    *(char *)unaff_RDI = (char)sVar2 * '\x02';
    pcVar13 = (char *)((longlong)unaff_RDI + 1);
    if (puVar4 == (undefined1 *)0x0) goto LAB_00aca9ec;
  }
  _memcpy(psVar5,puVar4,sVar12);
LAB_00aca9ec:
  pcVar13[(longlong)puVar4] = '\0';
  return;
}


