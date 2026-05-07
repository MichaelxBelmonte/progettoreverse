// Function: FUN_00caf340
// Address: 00caf340
// Size: 1359 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00caf6e0) */
/* WARNING: Removing unreachable block (ram,0x00caf6e9) */
/* WARNING: Removing unreachable block (ram,0x00caf4b0) */
/* WARNING: Removing unreachable block (ram,0x00caf4b9) */
/* WARNING: Removing unreachable block (ram,0x00caf428) */
/* WARNING: Removing unreachable block (ram,0x00caf431) */
/* WARNING: Removing unreachable block (ram,0x00caf762) */
/* WARNING: Removing unreachable block (ram,0x00caf76b) */

void FUN_00caf340(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  if (param_2 < 0xb) {
    if ((0x129U >> (param_2 & 0x1f) & 1) == 0) {
      if ((0x252U >> (param_2 & 0x1f) & 1) == 0) {
        if (param_2 == 10) {
          if ((unaff_RDI[8] != 0) && (cVar2 = FUN_00db3690(), cVar2 == '\0')) {
            FUN_00cbb5a0();
            *(undefined1 *)((longlong)unaff_RDI + 0xe1) = 1;
            *(int *)((longlong)unaff_RDI + 0xe4) = *(int *)((longlong)unaff_RDI + 0xe4) + 1;
            FUN_00db32a0();
            (**(code **)(*unaff_RDI + 0x3c8))();
          }
          if (unaff_RDI[0x22] != 0) {
            plVar3 = (longlong *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar3 + 0x18))();
            lVar1 = unaff_RDI[0x22];
            if (lVar1 != 0) {
              FUN_00d50b00();
              local_38 = DAT_027855e8;
              if (DAT_027855e8 != 0) {
                FUN_00d50b00();
              }
              local_30 = '\0';
              FUN_00ca0840();
              if (local_38 != 0) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            lVar1 = unaff_RDI[0x23];
            if (lVar1 != 0) {
              FUN_00d50b00();
              local_38 = DAT_02773400;
              if (DAT_02773400 != 0) {
                FUN_00d50b00();
              }
              local_30 = '\0';
              FUN_00ca0840();
              if (local_38 != 0) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_b8 = DAT_02773408;
            if (DAT_02773408 != 0) {
              FUN_00d50b00();
            }
            local_b0 = '\x01';
            FUN_00d50b00();
            local_a0 = '\0';
            local_a8 = plVar3;
            FUN_00d40470(&local_a8,&stack0xffffffffffffffb8,1,3);
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI[0x22] != 0) {
              unaff_RDI[0x22] = 0;
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
      else {
        if (0 < (int)unaff_RDI[0xe]) {
          *(int *)(unaff_RDI + 0xe) = (int)unaff_RDI[0xe] + -1;
          (**(code **)(*unaff_RDI + 0x3c8))();
        }
        if (unaff_RDI[0x22] != 0) {
          plVar3 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar3 + 0x18))();
          lVar1 = unaff_RDI[0x22];
          if (lVar1 != 0) {
            local_90 = 0;
            FUN_00d50b00();
            local_38 = DAT_027855e8;
            local_90 = '\x01';
            local_98 = lVar1;
            if (DAT_027855e8 != 0) {
              FUN_00d50b00();
            }
            local_30 = '\0';
            FUN_00ca0840();
            if (local_38 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar1 = unaff_RDI[0x23];
          if (lVar1 != 0) {
            local_80 = 0;
            FUN_00d50b00();
            local_38 = DAT_02773400;
            local_80 = '\x01';
            local_88 = lVar1;
            if (DAT_02773400 != 0) {
              FUN_00d50b00();
            }
            local_30 = '\0';
            FUN_00ca0840();
            if (local_38 != 0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d403d0();
          lVar1 = DAT_02773408;
          if (DAT_02773408 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b00();
          local_c0 = '\0';
          local_c8 = plVar3;
          FUN_00d40470(&local_c8,&stack0xffffffffffffff88,1,3);
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI[0x22] != 0) {
            unaff_RDI[0x22] = 0;
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00cbb5a0();
      *(undefined1 *)((longlong)unaff_RDI + 0xe1) = 1;
      *(int *)((longlong)unaff_RDI + 0xe4) = *(int *)((longlong)unaff_RDI + 0xe4) + 1;
      *(int *)(unaff_RDI + 0xe) = (int)unaff_RDI[0xe] + 1;
    }
  }
  if ((int)unaff_RDI[0xe] < 0) {
    *(undefined4 *)(unaff_RDI + 0xe) = 0;
  }
  return;
}


