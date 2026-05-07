// Function: FUN_0061e270
// Address: 0061e270
// Size: 765 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0061e43b) */
/* WARNING: Removing unreachable block (ram,0x0061e444) */
/* WARNING: Removing unreachable block (ram,0x0061e31e) */
/* WARNING: Removing unreachable block (ram,0x0061e327) */
/* WARNING: Removing unreachable block (ram,0x0061e367) */
/* WARNING: Removing unreachable block (ram,0x0061e374) */
/* WARNING: Removing unreachable block (ram,0x0061e4f4) */
/* WARNING: Removing unreachable block (ram,0x0061e4fd) */

ulonglong FUN_0061e270(undefined8 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = local_40;
  if (cVar2 == '\0') {
    FUN_0063f230();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e38f;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_0061e38f:
      FUN_00223a60();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00223a60();
        (**(code **)(&UNK_00001670 + *local_58))();
        FUN_000bda90();
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          bVar1 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_0061e479;
      }
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e32c;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_0061e32c:
      FUN_00752180();
      if (local_40 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00d50b20();
LAB_0061e479:
      if (plVar5 != (longlong *)0x0) {
        FUN_001060a0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
          uVar3 = 0;
        }
        else {
          if (param_2 != '\0') {
            FUN_0010ba00();
          }
          FUN_01caeae0();
          uVar4 = (undefined7)((ulonglong)local_40 >> 8);
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) goto LAB_0061e563;
            FUN_00d50b00();
          }
          else if (local_40 == (longlong *)0x0) {
LAB_0061e563:
            uVar3 = CONCAT71(uVar4,1);
            goto joined_r0x0061e548;
          }
          FUN_001060a0();
          (**(code **)(*local_40 + 0x3c8))();
          FUN_01d66ab0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = CONCAT71(uVar4,1);
          FUN_00d50b20();
        }
joined_r0x0061e548:
        if (bVar1) {
          FUN_00d50b20();
        }
        goto LAB_0061e552;
      }
    }
  }
  uVar3 = 0;
LAB_0061e552:
  return uVar3 & 0xffffffff;
}


