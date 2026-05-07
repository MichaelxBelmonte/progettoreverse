// Function: FUN_01dcf7e0
// Address: 01dcf7e0
// Size: 994 bytes
// Class: GNScrollView


longlong * FUN_01dcf7e0(int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  lVar5 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x178) + 0x10) + (longlong)param_1 * 8) +
             0x10) + (longlong)param_2 * 8);
  if (lVar5 == 0) {
    bVar3 = false;
    bVar6 = false;
    if (DAT_028b8a78 == 0) goto LAB_01dcf887;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    bVar6 = true;
    if (DAT_028b8a78 == lVar5) {
LAB_01dcf887:
      bVar3 = bVar6;
      plVar1 = *(longlong **)(unaff_RSI + 0x1f8);
      if (plVar1 == (longlong *)0x0) {
        pcVar2 = *(code **)(unaff_RSI + 0x188);
        if (pcVar2 != (code *)0x0) {
          FUN_00d50b00();
          local_68 = 0;
          local_70 = *(longlong *)(unaff_RSI + 400);
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          (*pcVar2)(param_1,param_2,&local_70);
          if (local_50 == lVar5) {
LAB_01dcfab7:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              bVar6 = lVar5 != 0;
              lVar5 = local_50;
              if (bVar6) {
                FUN_00d50b20();
              }
              goto LAB_01dcfab7;
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            bVar3 = true;
            lVar5 = local_50;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RSI != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        local_b0 = *(longlong *)
                    (*(longlong *)(*(longlong *)(unaff_RSI + 0x160) + 0x10) + (longlong)param_1 * 8)
        ;
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x20))(param_2,&stack0xffffffffffffff70,&local_b0);
        if (local_50 == lVar5) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          bVar6 = lVar5 != 0;
          lVar5 = local_50;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          bVar3 = true;
          lVar5 = local_50;
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      lVar4 = DAT_028b8a78;
      if (lVar5 == 0) {
        if (DAT_028b8a78 != 0) {
          FUN_00d50b00();
          lVar5 = lVar4;
LAB_01dcfb9a:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          goto LAB_01dcfba3;
        }
        lVar5 = 0;
      }
      else if (DAT_028b8a78 == lVar5) {
        if (!bVar3) {
          FUN_00d50b00();
          goto LAB_01dcfb9a;
        }
        bVar3 = true;
      }
      else {
        local_98 = '\0';
        local_a0 = lVar5;
        FUN_00d233f0();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
LAB_01dcfba3:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


