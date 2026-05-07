// Function: FUN_00e552a0
// Address: 00e552a0
// Size: 1536 bytes
// Class: GNCelemonyHTTPUploadRequest


/* WARNING: Removing unreachable block (ram,0x00e554e4) */
/* WARNING: Removing unreachable block (ram,0x00e554ed) */
/* WARNING: Removing unreachable block (ram,0x00e55450) */
/* WARNING: Removing unreachable block (ram,0x00e55630) */
/* WARNING: Removing unreachable block (ram,0x00e5563c) */
/* WARNING: Removing unreachable block (ram,0x00e5548d) */
/* WARNING: Removing unreachable block (ram,0x00e55496) */
/* WARNING: Removing unreachable block (ram,0x00e55412) */
/* WARNING: Removing unreachable block (ram,0x00e5541b) */
/* WARNING: Removing unreachable block (ram,0x00e5552e) */
/* WARNING: Removing unreachable block (ram,0x00e55711) */
/* WARNING: Removing unreachable block (ram,0x00e5571a) */
/* WARNING: Removing unreachable block (ram,0x00e555d0) */
/* WARNING: Removing unreachable block (ram,0x00e555d9) */
/* WARNING: Removing unreachable block (ram,0x00e55847) */
/* WARNING: Removing unreachable block (ram,0x00e55857) */
/* WARNING: Removing unreachable block (ram,0x00e5555c) */
/* WARNING: Removing unreachable block (ram,0x00e55569) */
/* WARNING: Removing unreachable block (ram,0x00e55647) */
/* WARNING: Removing unreachable block (ram,0x00e55650) */
/* WARNING: Removing unreachable block (ram,0x00e555e7) */
/* WARNING: Removing unreachable block (ram,0x00e555f3) */
/* WARNING: Removing unreachable block (ram,0x00e553d7) */
/* WARNING: Removing unreachable block (ram,0x00e553e0) */
/* WARNING: Removing unreachable block (ram,0x00e5588e) */
/* WARNING: Removing unreachable block (ram,0x00e55897) */
/* WARNING: Removing unreachable block (ram,0x00e5545d) */
/* WARNING: Removing unreachable block (ram,0x00e55469) */
/* WARNING: Removing unreachable block (ram,0x00e55696) */
/* WARNING: Removing unreachable block (ram,0x00e556a2) */
/* WARNING: Removing unreachable block (ram,0x00e556b0) */
/* WARNING: Removing unreachable block (ram,0x00e556bc) */

undefined8 FUN_00e552a0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong unaff_RDI;
  bool bVar6;
  int local_48;
  int local_44;
  longlong *local_40;
  char local_38;
  
  cVar3 = FUN_00dab510();
  if (cVar3 != '\0') {
    FUN_00d216c0();
    FUN_00d21370();
    FUN_00d216c0();
    FUN_00d21370();
    FUN_00d227d0();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_0258a670;
    (*DAT_0258a688)();
    puVar5 = *(undefined8 **)(unaff_RDI + 0x50);
    if (puVar5 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x50) = puVar4;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,0,0);
    FUN_00d216c0();
    FUN_00d21370();
    pcVar2 = DAT_0258e9a8;
    do {
      bVar6 = local_48 == 0;
      local_48 = local_48 + -1;
      if (bVar6) {
        return 1;
      }
      FUN_00dabdf0();
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          return 0;
        }
        FUN_00d50b00();
      }
      else if (local_40 == (longlong *)0x0) {
        return 0;
      }
      FUN_00d21140();
      FUN_00c82360();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (*(int *)(unaff_RDI + 0x28) < 3) {
LAB_00e556ce:
        cVar3 = FUN_00dab510();
        bVar6 = true;
        if (cVar3 != '\0') {
          FUN_00d79550();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          while (bVar6 = local_44 != 0, local_44 = local_44 + -1, bVar6) {
            puVar5 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar5 = &DAT_0258e990;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *(undefined1 *)(puVar5 + 2) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
            (*pcVar2)();
            if (*(int *)(unaff_RDI + 0x28) < 5) {
              lVar1 = *(longlong *)(unaff_RDI + 0x30);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              FUN_00e5d2a0();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              lVar1 = *(longlong *)(unaff_RDI + 0x30);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              FUN_00e5d630();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d795e0();
            FUN_00d50b20();
          }
          FUN_00d21140();
          bVar6 = false;
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        cVar3 = FUN_00dab510();
        if (cVar3 != '\0') {
          FUN_00d46530();
          if (local_40 == (longlong *)0x0) {
LAB_00e5565a:
            FUN_00e56e40();
          }
          else {
            FUN_00d50b00();
            FUN_00c7e7b0();
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00e56e40();
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            FUN_00c7e7b0();
            cVar3 = (**(code **)(*local_40 + 0x50))();
            if (cVar3 == '\0') goto LAB_00e5565a;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00e556ce;
        }
        bVar6 = true;
      }
      local_38 = '\0';
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    } while (!bVar6);
  }
  return 0;
}


