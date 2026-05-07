// Function: FUN_00d981d0
// Address: 00d981d0
// Size: 1502 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00d9872f) */
/* WARNING: Removing unreachable block (ram,0x00d98712) */
/* WARNING: Removing unreachable block (ram,0x00d986fb) */
/* WARNING: Removing unreachable block (ram,0x00d98327) */
/* WARNING: Removing unreachable block (ram,0x00d9832c) */
/* WARNING: Removing unreachable block (ram,0x00d98331) */
/* WARNING: Removing unreachable block (ram,0x00d98339) */
/* WARNING: Removing unreachable block (ram,0x00d98342) */
/* WARNING: Removing unreachable block (ram,0x00d98347) */
/* WARNING: Removing unreachable block (ram,0x00d9847c) */
/* WARNING: Removing unreachable block (ram,0x00d98484) */
/* WARNING: Removing unreachable block (ram,0x00d9848d) */
/* WARNING: Removing unreachable block (ram,0x00d98492) */
/* WARNING: Removing unreachable block (ram,0x00d98496) */
/* WARNING: Removing unreachable block (ram,0x00d984c5) */
/* WARNING: Removing unreachable block (ram,0x00d984de) */
/* WARNING: Removing unreachable block (ram,0x00d984ce) */
/* WARNING: Removing unreachable block (ram,0x00d984dc) */
/* WARNING: Removing unreachable block (ram,0x00d984e0) */
/* WARNING: Removing unreachable block (ram,0x00d984e8) */
/* WARNING: Removing unreachable block (ram,0x00d984f8) */
/* WARNING: Removing unreachable block (ram,0x00d982ff) */
/* WARNING: Removing unreachable block (ram,0x00d9834f) */
/* WARNING: Removing unreachable block (ram,0x00d982c3) */
/* WARNING: Removing unreachable block (ram,0x00d98310) */
/* WARNING: Removing unreachable block (ram,0x00d982d0) */
/* WARNING: Removing unreachable block (ram,0x00d98312) */
/* WARNING: Removing unreachable block (ram,0x00d982f5) */
/* WARNING: Removing unreachable block (ram,0x00d982fa) */
/* WARNING: Removing unreachable block (ram,0x00d98363) */
/* WARNING: Removing unreachable block (ram,0x00d9836d) */
/* WARNING: Removing unreachable block (ram,0x00d98372) */
/* WARNING: Removing unreachable block (ram,0x00d9837a) */
/* WARNING: Removing unreachable block (ram,0x00d98383) */
/* WARNING: Removing unreachable block (ram,0x00d98388) */
/* WARNING: Removing unreachable block (ram,0x00d98505) */
/* WARNING: Removing unreachable block (ram,0x00d9850d) */
/* WARNING: Removing unreachable block (ram,0x00d9851a) */
/* WARNING: Removing unreachable block (ram,0x00d9851f) */
/* WARNING: Removing unreachable block (ram,0x00d98527) */
/* WARNING: Removing unreachable block (ram,0x00d98532) */
/* WARNING: Removing unreachable block (ram,0x00d9853d) */
/* WARNING: Removing unreachable block (ram,0x00d98549) */
/* WARNING: Removing unreachable block (ram,0x00d98551) */
/* WARNING: Removing unreachable block (ram,0x00d98585) */
/* WARNING: Removing unreachable block (ram,0x00d98591) */
/* WARNING: Removing unreachable block (ram,0x00d98596) */
/* WARNING: Removing unreachable block (ram,0x00d9859e) */
/* WARNING: Removing unreachable block (ram,0x00d983b0) */
/* WARNING: Removing unreachable block (ram,0x00d983c0) */
/* WARNING: Removing unreachable block (ram,0x00d98707) */
/* WARNING: Removing unreachable block (ram,0x00d9871b) */
/* WARNING: Removing unreachable block (ram,0x00d98743) */
/* WARNING: Removing unreachable block (ram,0x00d98726) */
/* WARNING: Removing unreachable block (ram,0x00d98784) */
/* WARNING: Removing unreachable block (ram,0x00d98791) */
/* WARNING: Removing unreachable block (ram,0x00d983a5) */
/* WARNING: Removing unreachable block (ram,0x00d983ab) */
/* WARNING: Removing unreachable block (ram,0x00d9873a) */

undefined8 * FUN_00d981d0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  FUN_00d500e0();
LAB_00d982a0:
  do {
    cVar2 = (**(code **)(*local_40 + 0x388))();
    lVar1 = DAT_0276ce70;
    if (cVar2 != '\0') {
      *(byte *)((longlong)puVar3 + 0x24) = *(byte *)((longlong)puVar3 + 0x24) & 0xfe;
LAB_00d986e7:
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_0276ce70 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_40 + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*local_40 + 0x388))(), cVar2 == '\0')) {
      lVar1 = DAT_0276ce70;
      if (DAT_0276ce70 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x3e0))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*local_40 + 0x388))();
      if (cVar2 != '\0') {
        FUN_00d8dbf0();
        goto LAB_00d986e7;
      }
      (**(code **)(*local_40 + 0x3d0))();
      if (segment_command_00000020.cmd == 0xffffffff) {
        FUN_00d931c0();
      }
      if ((ushort)(*(short *)MACH_HEADER._24_8_ - 0x31U) < 9) {
        FUN_00d8dbf0();
      }
      else {
        FUN_00d8dbf0();
        FUN_00d8dbf0();
      }
      goto LAB_00d982a0;
    }
    cVar2 = (**(code **)(*local_40 + 0x3d8))();
    if (cVar2 != '\0') {
      FUN_00d8dbf0();
    }
  } while( true );
}


