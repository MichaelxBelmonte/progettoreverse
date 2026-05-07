// Function: FUN_01a37880
// Address: 01a37880
// Size: 1443 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a379fd) */
/* WARNING: Removing unreachable block (ram,0x01a37a09) */

void FUN_01a37880(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong *local_f8;
  char local_f0;
  longlong local_e0;
  char local_d8;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_b8;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  fVar12 = (float)((ulonglong)param_3 >> 0x20);
  (**(code **)(*(longlong *)*in_RDX + 0x388))();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  FUN_01d48a10();
  if (local_98 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)((ulonglong)param_4 >> 0x20) + fVar12 + DAT_02390d00;
  param_1 = param_1 + DAT_023b36a8;
  fVar11 = param_2 + DAT_0241fd58 + param_1 + DAT_02390d00;
  (**(code **)(*(longlong *)*in_RDX + 0x368))();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_01a37a0e;
    }
  }
  else if (local_98 != 0) {
LAB_01a37a0e:
    fVar13 = DAT_023942a8 + fVar12;
    if (0 < *(int *)(local_98 + 0xc)) {
      local_c8 = DAT_023908ec + fVar12;
      local_c4 = DAT_02390d04 + fVar12;
      fVar12 = fVar12 + DAT_0241be54;
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar7 * 8);
        iVar6 = (**(code **)(*plVar1 + 0x380))();
        local_b8 = fVar12;
        if (iVar6 == 0) {
          (**(code **)(*plVar1 + 0x378))();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            cVar5 = (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x3c8))();
            local_b8 = local_c8;
            if (cVar5 == '\0') {
              local_b8 = fVar13;
            }
            FUN_01d48370();
            uVar9 = (**(code **)(*unaff_RDI + 0x640))();
            lVar4 = DAT_027e1fb8;
            if (DAT_027e1fb8 != 0) {
              uVar9 = FUN_00d50b00();
            }
            local_e0 = lVar4;
            local_d8 = '\x01';
            (**(code **)(*local_f8 + 0x3b0))(uVar9,&local_e0);
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_01d488d0();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = (longlong *)*unaff_RSI;
            (**(code **)(*plVar1 + 0x378))();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            fVar10 = (float)(**(code **)(*plVar1 + 0x368))();
            (**(code **)(*plVar2 + 0x3f0))(fVar10 + DAT_02390d2c,local_c4);
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d48390();
          }
        }
        cVar5 = (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x3c8))();
        if ((cVar5 != '\0') || (iVar6 = (**(code **)(*plVar1 + 0x380))(), iVar6 == 0)) {
          plVar2 = (longlong *)*unaff_RSI;
          local_cc = (**(code **)(*plVar1 + 0x368))();
          uVar9 = (**(code **)(*plVar1 + 0x368))();
          (**(code **)(*plVar2 + 0x3e0))(local_cc,local_b8,uVar9,fVar8);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_98 + 0xc));
    }
    FUN_01a01420();
    bVar3 = false;
    goto LAB_01a37dc5;
  }
  fVar13 = fVar12 + DAT_023942a8;
  bVar3 = true;
LAB_01a37dc5:
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(param_1,fVar13,fVar11,fVar13);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(param_1,fVar8,fVar11,fVar8);
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


