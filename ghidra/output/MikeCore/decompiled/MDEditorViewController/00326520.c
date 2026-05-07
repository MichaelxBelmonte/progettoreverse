// Function: FUN_00326520
// Address: 00326520
// Size: 920 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x00326851) */
/* WARNING: Removing unreachable block (ram,0x0032685a) */
/* WARNING: Removing unreachable block (ram,0x00326660) */
/* WARNING: Removing unreachable block (ram,0x00326669) */
/* WARNING: Removing unreachable block (ram,0x00326807) */
/* WARNING: Removing unreachable block (ram,0x00326810) */
/* WARNING: Removing unreachable block (ram,0x0032673a) */
/* WARNING: Removing unreachable block (ram,0x00326747) */
/* WARNING: Removing unreachable block (ram,0x003265a9) */
/* WARNING: Removing unreachable block (ram,0x003265b2) */
/* WARNING: Removing unreachable block (ram,0x003267c5) */
/* WARNING: Removing unreachable block (ram,0x003267ce) */

longlong * FUN_00326520(undefined1 *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float local_b8 [2];
  float local_b0;
  float *local_a8;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if ((param_2[1] < 0.0) || (DAT_023942a8 <= param_2[1])) {
LAB_00326869:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_a8 = param_2;
    fVar7 = (float)(**(code **)(*unaff_RSI + 0xa58))();
    if (local_80 == '\0') {
      if (local_88 == 0) goto LAB_00326869;
      fVar7 = (float)FUN_00d50b00();
    }
    else if (local_88 == 0) goto LAB_00326869;
    if (*(int *)(local_88 + 0xc) < 1) {
      bVar3 = false;
      local_38 = 0;
    }
    else {
      iVar5 = 0;
      lVar6 = 0;
      local_38 = 0;
      bVar3 = false;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar6 * 8);
        cVar4 = (**(code **)(*unaff_RSI + 0xa60))(fVar7,local_b8);
        fVar7 = extraout_XMM0_Da;
        if (cVar4 != '\0') {
          fVar7 = local_b0 + local_b8[0] + DAT_02390d00;
          fVar1 = *local_a8;
          if (((fVar1 < local_b8[0] + DAT_023b1614) || (local_b8[0] + DAT_02394298 < fVar1)) ||
             (iVar5 < 0)) {
            if (((fVar7 + DAT_023b1d84 <= fVar1) && (fVar7 = fVar7 + DAT_02390d2c, fVar1 <= fVar7))
               && (iVar5 < 1)) {
              if (param_1 != (undefined1 *)0x0) {
                *param_1 = 0;
              }
              if (local_38 == 0) {
                FUN_00326480();
                local_38 = local_48;
                if (local_48 == 0) {
                  local_38 = 0;
                }
                else {
                  bVar3 = true;
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_40 = '\0';
              fVar7 = (float)FUN_00d21140();
              iVar5 = -1;
              local_48 = lVar2;
            }
          }
          else {
            if (param_1 != (undefined1 *)0x0) {
              *param_1 = 1;
            }
            if (local_38 == 0) {
              FUN_00326480();
              local_38 = local_48;
              if (local_48 == 0) {
                local_38 = 0;
              }
              else {
                bVar3 = true;
                if (local_40 == '\0') {
                  FUN_00d50b00();
                }
              }
            }
            local_40 = '\0';
            fVar7 = (float)FUN_00d21140();
            iVar5 = 1;
            local_48 = lVar2;
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_0032bfd0();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_003268b9;
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_003268b9;
    }
  }
  local_38 = 0;
LAB_003268b9:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


