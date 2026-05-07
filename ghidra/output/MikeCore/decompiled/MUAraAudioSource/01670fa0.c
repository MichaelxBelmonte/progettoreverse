// Function: FUN_01670fa0
// Address: 01670fa0
// Size: 638 bytes
// Class: MUAraAudioSource
// String references:
//   "_musicalContextData"


/* WARNING: Removing unreachable block (ram,0x0167111b) */
/* WARNING: Removing unreachable block (ram,0x01671124) */
/* WARNING: Removing unreachable block (ram,0x016711b6) */
/* WARNING: Removing unreachable block (ram,0x016711bf) */

void FUN_01670fa0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_028ad820;
  if ((DAT_028ad820 == 0) || (DAT_028ad829 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad820 == 0) {
      FUN_00d630a0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01e33cd0();
      lVar2 = DAT_028ad820;
      if (DAT_028ad820 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = DAT_028ad820 != 0;
        DAT_028ad820 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (DAT_028ad828 == '\0')) {
        DAT_028ad828 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_016be450();
      lVar2 = FUN_00e85ef0();
      if (lVar2 == 0) {
        lVar2 = FUN_00e858c0();
        if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x28) == 0)) goto LAB_0167119a;
LAB_0167115a:
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        if (*(longlong *)(lVar2 + 0x30) != 0) goto LAB_0167115a;
LAB_0167119a:
        bVar1 = true;
      }
      FUN_00d23f50();
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = DAT_028ad820;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_016711f7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_016711f7:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


