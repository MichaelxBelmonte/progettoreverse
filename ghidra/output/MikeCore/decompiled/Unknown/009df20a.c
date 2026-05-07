// Function: FUN_009df20a
// Address: 009df20a
// Size: 580 bytes
// Class: Unknown


ulonglong * FUN_009df20a(string *param_1,string *param_2)

{
  uint uVar1;
  string *psVar2;
  string *psVar3;
  longlong lVar4;
  char *pcVar5;
  string *psVar6;
  undefined1 *puVar7;
  string sVar8;
  undefined7 uVar9;
  undefined1 *puVar10;
  longlong unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong uVar11;
  ulonglong local_68;
  undefined1 *local_60;
  longlong local_58;
  undefined8 local_48;
  ulonglong local_40;
  string *local_38;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  sVar8 = SUB81(param_2,0);
  psVar6 = param_1;
  if (*(longlong *)(unaff_RSI + 0x160) == 0) {
    uVar11 = (longlong)param_1 - (longlong)param_2;
  }
  else {
    uVar11 = (longlong)param_1 - (longlong)param_2;
    if (0xffffffffffffffef < uVar11) goto LAB_009df43c;
    psVar2 = param_2;
    if (uVar11 < 0x17) {
      uVar1 = (int)uVar11 * 2;
      psVar6 = (string *)(ulonglong)uVar1;
      psVar3 = (string *)((longlong)&local_48 + 1);
      local_48 = CONCAT71(local_48._1_7_,(char)uVar1);
    }
    else {
      psVar3 = operator_new((ulong)param_1);
      local_48 = uVar11 + 0x10 & 0xfffffffffffffff0 | 1;
      local_40 = uVar11;
      local_38 = psVar3;
    }
    while (psVar2 != param_1) {
      sVar8 = *psVar2;
      *psVar3 = sVar8;
      psVar3 = psVar3 + 1;
      psVar6 = psVar2 + 1;
      psVar2 = psVar6;
    }
    *psVar3 = (string)0x0;
    lVar4 = FUN_009df470();
    if ((local_48 & 1) != 0) {
      operator_delete(psVar6);
    }
    if (lVar4 != unaff_RSI + 0x158) {
      std::string::string(psVar6,(string *)CONCAT71(uVar9,sVar8));
      return unaff_RDI;
    }
  }
  if (uVar11 < 0xfffffffffffffff0) {
    psVar2 = param_2;
    if (uVar11 < 0x17) {
      uVar1 = (int)uVar11 * 2;
      psVar6 = (string *)(ulonglong)uVar1;
      psVar3 = (string *)((longlong)&local_48 + 1);
      local_48 = CONCAT71(local_48._1_7_,(char)uVar1);
    }
    else {
      psVar3 = operator_new((ulong)psVar6);
      local_48 = uVar11 + 0x10 & 0xfffffffffffffff0 | 1;
      local_40 = uVar11;
      local_38 = psVar3;
    }
    while (psVar2 != param_1) {
      *psVar3 = *psVar2;
      psVar3 = psVar3 + 1;
      psVar6 = psVar2 + 1;
      psVar2 = psVar6;
    }
    *psVar3 = (string)0x0;
    FUN_00acf710();
    if ((local_48 & 1) != 0) {
      operator_delete(psVar6);
    }
    puVar7 = (undefined1 *)CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
    puVar10 = (undefined1 *)((local_68 & 0xff) >> 1);
    if ((local_68 & 1) != 0) {
      puVar10 = local_60;
    }
    if (puVar10 == (undefined1 *)0x0) {
      if (uVar11 == 1) {
        sVar8 = *param_2;
        *(char *)unaff_RDI = '\x02';
        *(string *)((longlong)unaff_RDI + 1) = sVar8;
        *(char *)((longlong)unaff_RDI + 2) = '\0';
      }
      else {
        unaff_RDI[2] = 0;
        unaff_RDI[1] = 0;
        *unaff_RDI = 0;
      }
    }
    else {
      if ((local_68 & 1) == 0) {
        local_58 = (longlong)&local_48 + 1;
      }
      if ((undefined1 *)0xffffffffffffffef < puVar10) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar10) {
        pcVar5 = operator_new((ulong)puVar7);
        unaff_RDI[2] = (ulonglong)pcVar5;
        *unaff_RDI = (ulonglong)(puVar10 + 0x10) & 0xfffffffffffffff0 | 1;
        unaff_RDI[1] = (ulonglong)puVar10;
      }
      else {
        *(char *)unaff_RDI = (char)puVar10 * '\x02';
        pcVar5 = (char *)((longlong)unaff_RDI + 1);
      }
      puVar7 = (undefined1 *)0x0;
      do {
        pcVar5[(longlong)puVar7] = puVar7[local_58];
        puVar7 = puVar7 + 1;
      } while (puVar10 != puVar7);
      pcVar5[(longlong)puVar7] = '\0';
    }
    if ((local_68 & 1) != 0) {
      operator_delete(puVar7);
    }
    return unaff_RDI;
  }
LAB_009df43c:
                    /* WARNING: Subroutine does not return */
  std::__basic_string_common<true>::__throw_length_error();
}


