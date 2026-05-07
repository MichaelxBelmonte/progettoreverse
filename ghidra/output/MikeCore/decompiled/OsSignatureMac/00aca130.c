// Function: FUN_00aca130
// Address: 00aca130
// Size: 500 bytes
// Class: OsSignatureMac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aca130(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined4 extraout_var;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulonglong *unaff_RDI;
  byte local_48;
  undefined1 *puVar4;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (ulong)param_1;
  FUN_00aca7e0();
  if ((DAT_028a0bb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_028a0ba0 = 0x2e02;
    DAT_028a0ba2 = 0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  iVar1 = FUN_00ac9910();
  if (iVar1 != 0) {
    if ((DAT_028a0bd8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      DAT_028a0bc0 = 4;
      _DAT_028a0bc1 = 0x2e2e;
      DAT_028a0bc3 = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    iVar1 = FUN_00ac9910();
    if ((iVar1 != 0) && (lVar3 = std::string::rfind((char)uVar6,0xffffffff), lVar3 != -1)) {
      sVar2 = _strlen((char *)CONCAT44(uVar7,uVar6));
      puVar4 = (undefined1 *)CONCAT44(extraout_var,sVar2);
      if ((undefined1 *)0xffffffffffffffef < puVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar4) {
        pcVar5 = operator_new(uVar6);
        unaff_RDI[2] = (ulonglong)pcVar5;
        *unaff_RDI = (ulonglong)(puVar4 + 0x10) & 0xfffffffffffffff0 | 1;
        unaff_RDI[1] = (ulonglong)puVar4;
      }
      else {
        *(char *)unaff_RDI = (char)sVar2 * '\x02';
        pcVar5 = (char *)((longlong)unaff_RDI + 1);
        if (puVar4 == (undefined1 *)0x0) {
          *pcVar5 = '\0';
          goto joined_r0x00aca26c;
        }
      }
      _memcpy((void *)CONCAT44(uVar7,uVar6),puVar4,param_3);
      pcVar5[(longlong)puVar4] = '\0';
      goto joined_r0x00aca26c;
    }
  }
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
joined_r0x00aca26c:
  if ((local_48 & 1) != 0) {
    operator_delete((void *)CONCAT44(uVar7,uVar6));
  }
  return;
}


