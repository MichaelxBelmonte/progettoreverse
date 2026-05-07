// Function: FUN_00adcfd0
// Address: 00adcfd0
// Size: 972 bytes
// Class: TSocket
// String references:
//   "%d"
//   "TSocket::open() getaddrinfo() "


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adcfd0(char *param_1,undefined8 param_2,undefined8 param_3,addrinfo **param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulonglong *puVar4;
  undefined4 extraout_var;
  char *pcVar6;
  undefined8 *puVar7;
  addrinfo *paVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  string *psVar12;
  longlong *unaff_RDI;
  size_t sVar13;
  undefined4 uVar14;
  byte local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_80;
  string *local_78;
  undefined8 local_70;
  char *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char *local_38;
  undefined1 *puVar5;
  
  uVar14 = (undefined4)((ulonglong)param_3 >> 0x20);
  sVar13 = (size_t)param_3;
  cVar1 = (**(code **)(*unaff_RDI + 0x10))();
  if (cVar1 != '\0') {
    return;
  }
  psVar12 = (string *)(ulonglong)*(uint *)(unaff_RDI + 4);
  if (0xffff < *(uint *)(unaff_RDI + 4)) {
    puVar7 = (undefined8 *)___cxa_allocate_exception();
    local_a8 = operator_new((ulong)param_1);
    local_b8 = _DAT_023d4f00;
    uStack_b0 = _UNK_023d4f08;
    local_a8[2] = 0x696c61766e692073;
    local_a8[1] = 0x692074726f702064;
    *local_a8 = 0x6569666963657053;
    *(undefined2 *)(local_a8 + 3) = 100;
    *puVar7 = &DAT_02517278;
    uVar14 = std::string::string((string *)0x6569666963657053,psVar12);
    *puVar7 = &DAT_0252c498;
    *(undefined4 *)(puVar7 + 4) = 5;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar14,FUN_00953b70);
  }
  local_50 = 0;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 1;
  local_b8 = 0x401;
  _sprintf(param_1,(char *)psVar12);
  paVar8 = (addrinfo *)&local_50;
  iVar2 = _getaddrinfo((char *)paVar8,(char *)&local_b8,(addrinfo *)CONCAT44(uVar14,sVar13),param_4)
  ;
  if (iVar2 == 0) {
    if (local_50 != 0) {
      FUN_00adb8e0();
    }
    _freeaddrinfo(paVar8);
    return;
  }
  FUN_00adb250();
  puVar4 = (ulonglong *)std::string::insert((ulong)paVar8,"TSocket::open() getaddrinfo() ");
  local_58 = (undefined8 *)puVar4[2];
  pcVar9 = (char *)*puVar4;
  uStack_60 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  local_68 = pcVar9;
  _gai_strerror((int)pcVar9);
  sVar3 = _strlen(pcVar9);
  puVar5 = (undefined1 *)CONCAT44(extraout_var,sVar3);
  if ((undefined1 *)0xffffffffffffffef < puVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pcVar6 = operator_new((ulong)pcVar9);
    local_48 = (ulonglong)(puVar5 + 0x10) & 0xfffffffffffffff0 | 1;
    local_40 = puVar5;
    local_38 = pcVar6;
  }
  else {
    local_48 = CONCAT71(local_48._1_7_,(char)sVar3 * '\x02');
    pcVar6 = (char *)((longlong)&local_48 + 1);
    if (puVar5 == (undefined1 *)0x0) goto LAB_00add27e;
  }
  _memcpy(pcVar9,puVar5,sVar13);
LAB_00add27e:
  pcVar6[(longlong)puVar5] = '\0';
  if ((local_48 & 1) == 0) {
    uVar11 = (ulong)((byte)local_48 >> 1);
  }
  else {
    uVar11 = (ulong)local_40;
  }
  puVar7 = (undefined8 *)std::string::append(pcVar9,uVar11);
  local_70 = puVar7[2];
  pvVar10 = (void *)*puVar7;
  psVar12 = (string *)puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  local_80 = pvVar10;
  local_78 = psVar12;
  if ((local_48 & 1) != 0) {
    operator_delete(pvVar10);
  }
  if (((ulonglong)local_68 & 1) != 0) {
    operator_delete(pvVar10);
  }
  if ((local_d0 & 1) == 0) {
    uVar11 = (ulong)pvVar10;
  }
  else {
    operator_delete(pvVar10);
    uVar11 = (ulong)pvVar10;
  }
  (*DAT_02754b00)();
  (**(code **)(*unaff_RDI + 0x28))();
  puVar7 = (undefined8 *)___cxa_allocate_exception();
  local_58 = operator_new(uVar11);
  local_68 = (char *)_DAT_023d4fc0;
  uStack_60 = _UNK_023d4fc8;
  local_58[4] = 0x74656b636f732074;
  local_58[3] = 0x6e65696c6320726f;
  local_58[2] = 0x662074736f682065;
  local_58[1] = 0x766c6f7365722074;
  *local_58 = 0x6f6e20646c756f43;
  *(undefined2 *)(local_58 + 5) = 0x2e;
  *puVar7 = &DAT_02517278;
  uVar14 = std::string::string((string *)0x6f6e20646c756f43,psVar12);
  *puVar7 = &DAT_0252c498;
  *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar14,FUN_00953b70);
}


