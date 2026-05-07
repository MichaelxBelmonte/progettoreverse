// Function: FUN_00109ad0
// Address: 00109ad0
// Size: 1079 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x00109b8b) */
/* WARNING: Removing unreachable block (ram,0x00109b90) */
/* WARNING: Removing unreachable block (ram,0x00109bb0) */
/* WARNING: Removing unreachable block (ram,0x00109b92) */
/* WARNING: Removing unreachable block (ram,0x00109bb2) */
/* WARNING: Removing unreachable block (ram,0x00109c40) */
/* WARNING: Removing unreachable block (ram,0x00109c60) */
/* WARNING: Removing unreachable block (ram,0x00109c42) */
/* WARNING: Removing unreachable block (ram,0x00109c62) */

undefined8 FUN_00109ad0(int param_1,char param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  longlong lVar4;
  undefined8 uVar5;
  char unaff_SIL;
  longlong unaff_RDI;
  char local_res8;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  int local_94;
  longlong local_90;
  char local_88;
  longlong local_58;
  char local_50;
  int local_40;
  
  if (((((local_res8 == '\0') && (*(char *)(unaff_RDI + 0xc) == unaff_SIL)) &&
       (cVar2 = FUN_01a90590(), cVar2 == param_2)) &&
      ((iVar3 = FUN_01a90480(), iVar3 == param_3 && (iVar3 = FUN_01a904a0(), iVar3 == param_1)))) &&
     ((FUN_01a93720(), extraout_var == param_4 && (*(char *)(unaff_RDI + 0xd) == '\0')))) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 0xd) = 0;
    *(char *)(unaff_RDI + 0xc) = unaff_SIL;
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00106380();
      }
      FUN_0010c010();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    local_94 = param_4;
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00107b60();
      }
      FUN_0010c0b0();
    }
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90560();
    FUN_01a90560();
    FUN_01a90560();
    FUN_00e7bcc0();
    FUN_01a93730();
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_00d6f370();
      FUN_00108380();
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *(longlong *)(unaff_RDI + 0x10);
      }
      else {
        lVar1 = *(longlong *)(unaff_RDI + 0x10);
      }
      if (lVar1 != 0) {
        local_88 = 0;
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar1;
      FUN_00d6f570();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_026d7d88;
    if (DAT_026d7d88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_a8 = 0;
    local_a0 = '\0';
    FUN_00d40470(&local_a8,&stack0xffffffffffffff80,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = 1;
  }
  return uVar5;
}


